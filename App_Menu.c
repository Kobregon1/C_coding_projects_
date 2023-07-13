#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "TicTacToe.c"
#include "BetterCalc.c"
#include "Task_Manager.c"
#include "Read_file.c"

void Menu(char choices[][50]);
void menuChoice();
void returnToMenu();

int main(){
    char mainChoice;
    char choices[][50] = {
                        "1 ) New C File", "2 ) New C++ File", "3 ) New Python file\n",
                        "4 ) TicTacToe", "5 ) Task Manager App", "6 ) Calculator App\n",
                        "7 ) Open and read file"
                        };
                        
    Menu(choices);
    menuChoice();

    printf("\nWould you like to return to Menu?(Y/N): ");
    scanf(" %c", &mainChoice);
    
    mainChoice = toupper(mainChoice);
    
    if(mainChoice =='Y'){
        returnToMenu();
    }
    else if(mainChoice == 'N'){
        printf("\nExiting...");
    }
    else{
        printf("\nINVALID INPUT...\nEND OF PROGRAM");
    }

    return 0;
}

void menuChoice(){
    int choice;
    char fileName[50];
    char Cpp_dir_path[] = "C:\\Users\\kevin\\OneDrive\\Desktop\\C_C++\\C++\\";
    char python_dir_path[] = "C:\\Users\\kevin\\OneDrive\\Desktop\\Python\\";
    char typeC[5]= ".c";
    char typeCpp[5]= ".cpp";
    char typePython[5]= ".py";
    char case4Choice;
    char Path_to_file[200];

    printf("Enter choice (1-9): ");
    scanf("%d", &choice);
    getchar();

    switch(choice){
        // For C files
        case 1:
        
        printf("\nFile Name: ");
        scanf("%s", fileName);
        getchar();

        strcat(fileName, typeC);

        FILE *pCfile = fopen(*&fileName, "w");
        fclose(pCfile);

        printf("---C File Sucessfully Made---\n");
        break;

        // For C++ files
        case 2:
        printf("\nFile Name: ");
        scanf("%s", fileName);

        strcat(Cpp_dir_path, fileName);
        strcat(Cpp_dir_path, typeCpp);
        
        FILE *pCPPfile = fopen(Cpp_dir_path, "w");
        fclose(pCPPfile);

        printf("---C++ File Sucessfully Made---\n");
        break;

        // For python Files
        case 3:
        printf("\nFile Name: ");
        scanf("%s", fileName);
        getchar();
        
        strcat(python_dir_path, fileName);
        strcat(python_dir_path, typePython);
        
        FILE *pPythonfile = fopen(python_dir_path, "w");
        fclose(pPythonfile);

        printf("---Python File Sucessfully Made---\n");
        break;

        // TicTacToe Game
        case 4:
        printf("\n");
        main4();
        break;

        // Task Manager
        case 5:
        main5();
        break;

        // Calculator
        case 6:
        main6();
        break;

        // Open and read file
        case 7:
        main7();
        break;

        default:
        printf("\nEXIT SUCCESSFULLY");
    }


}

void Menu(char choices[][50]){

    char menuTitle[] = "\t||\t\t\tAPPLICATION MENU\t\t\t  ||\n";
    int sizeMenu = sizeof(menuTitle);
    sizeMenu += sizeMenu + 5;
    
    printf("\n");
    printf("%s", menuTitle);
    printf("\t");

    for(int i = 0; i <= sizeMenu; i++){
        printf("=");
    }
    
    printf("\n");

    for(int i = 0; i < 9; i++){
        printf("\t%s", choices[i]);
    }

    printf("\n");
}

void returnToMenu(){
    main();
}