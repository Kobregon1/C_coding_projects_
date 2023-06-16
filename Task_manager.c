#include <stdio.h>
#include <time.h>

void Drawing();

int main() {
    Drawing();
    
    time_t currentTime;
    struct tm *localTime;

    time(&currentTime);
    localTime = localtime(&currentTime);

    // Convert the current time to a string representation
    char *dateString = ctime(&currentTime);

    printf("\nCurrent Date & time: %s", dateString);
    printf("---------------------------------------------\n");

    FILE * fpointer = fopen("Task_Manager.txt", "a");
    char taskName1 [20];
    char taskName2 [20];
    
    printf("What task did you complete?\n");
    scanf("%s %s", taskName1, taskName2);
    fprintf(fpointer,"%s %s @ %s" , taskName1, taskName2, dateString);
    
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
