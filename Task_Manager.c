#include <stdio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

void Drawing();
void capitalizeInput(char *input);
void updateTime(char *dateString);
void addTask(FILE *fpointer, char *dateString, int *inputCount);

// change to main5 when using App_Menu.c
int main() {
    Drawing();
    
    char dateString[100];
    updateTime(dateString);
    capitalizeInput(dateString);

    printf("\nCurrent Date & time: %s\n", dateString);
    printf("---------------------------------------------\n");

    FILE *fpointer = fopen("Task_Manager.txt", "a");
    char taskName[100];

    printf("What task did you complete?\n");
    fgets(taskName, 100, stdin);
    capitalizeInput(taskName);
    updateTime(dateString);
    fprintf(fpointer, "%s: %s", dateString, taskName);
    
    int inputCount = 0;
    
    addTask(fpointer, dateString, &inputCount);

    fclose(fpointer);
    return 0;
}


void Drawing(){
    printf("\n\t=============================\t _______________\n");
    printf("\t|| Welcome To Task Manager ||\t|~~~~~~~~~~~ ||\t|\n");
    printf("\t=============================\t|~~~~~~~~~~~ ||\t|\n");
    printf("\t\t\t\t\t|~~~~~~~~~~~ ||\t|\n");
    printf("\t\t\t\t\t|~~~~~~~~~~~ ||\t|\n");
    printf("\t\t\t\t\t|~~~~~~~~~~~ ||\t|\n");
    printf("\t\t\t\t\t|_______________|\n");
}

void capitalizeInput(char *input) {
    if (input[0] != '\0') {
        input[0] = toupper((unsigned char)input[0]);
    }
}

void updateTime(char *dateString) {
    time_t currentTime;
    struct tm *localTime;
    
    time(&currentTime);
    localTime = localtime(&currentTime);
    
    // Convert the current time to a string representation
    char *newDateString = ctime(&currentTime);
    newDateString[strlen(newDateString) - 1] = '\0'; // eliminates newline created by dateString
    
    strcpy(dateString, newDateString);
}

void addTask(FILE *fpointer, char *dateString, int *inputCount) {
    char choice;
    char taskName[100];
    
    do {
        printf("\nAdd task (type \"None\" to exit):\n");
        fgets(taskName, 100, stdin);
        capitalizeInput(taskName);
        updateTime(dateString);
        
        if (strcmp(taskName, "None\n") == 0 || strcmp(taskName, "none\n") == 0) {
            printf("\nNo more tasks added\n");
            break;
        } else {
            fprintf(fpointer, "%s: %s", dateString, taskName);
        }
        
        (*inputCount)++;
        
        if (*inputCount > 50) {
            printf("\nTask Manager Exited\n");
            break;
        }
        
        printf("\nDid you complete other tasks? (y or n): ");
        scanf(" %c", &choice);
        getchar();
        
        choice = tolower(choice);
    } while (choice == 'y');
}
