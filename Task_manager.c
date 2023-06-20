#include <stdio.h>
#include <time.h>
#include <string.h>

void Drawing();

int main() {
    Drawing();
    
    time_t currentTime;
    struct tm *localTime;

    time(&currentTime);
    localTime = localtime(&currentTime);

    // Convert the current time to a string representation
    char *dateString = ctime(&currentTime);
    dateString[strlen(dateString)-1] = '\0';

    printf("\nCurrent Date & time: %s", dateString);
    printf("---------------------------------------------\n");

    FILE * fpointer = fopen("Task_Manager.txt", "a");
    
    char taskName [100];
    
    printf("What task did you complete?\n");
    fgets(taskName, 100, stdin);
   
    fprintf(fpointer,"%s: %s", dateString, taskName);
    
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
