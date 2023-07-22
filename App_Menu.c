#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "TicTacToe.c"
#include "BetterCalc.c"
#include "Task_Manager.c"
#include "Read_file.c"
# Added comment from GitHub
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

    char Cpp_dir_path[] =     	// Copy C++ directory path here;
    char Python_dir_path[] =    // Copy Python directory path here;
    char C_dir_path[] =         // Copy C directory path here;
    
    char typeC[5]= ".c";
    char typeCpp[5]= ".cpp";
    char typePython[5]= ".py";

    printf("Enter choice (1-9): ");
    scanf("%d", &choice);
    getchar();

    switch(choice){
        // For C files
        case 1:
        
        printf("\nFile Name: ");
        scanf("%s", fileName);
        getchar();

        strcat(C_dir_path, fileName);
        strcat(C_dir_path, typeC);

        FILE *pCfile = fopen(C_dir_path, "w");
        fclose(pCfile);

        printf("---C File Sucessfully Made---\n");
        break;

        // For C++ files
        case 2:
        printf("\nFile Name: ");
        scanf("%s", fileName);
        getchar();

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
        
        strcat(Python_dir_path, fileName);
        strcat(Python_dir_path, typePython);
        
        FILE *pPythonfile = fopen(Python_dir_path, "w");
        fclose(pPythonfile);

        printf("---Python File Sucessfully Made---\n");
        break;

        // TicTacToe.c
        case 4:
        printf("\n");
        main4();
        break;

        // Task_manager.c
        case 5:
        main5();
        break;

        // BetterCalc.c
        case 6:
        main6();
        break;

        // Read_file.c
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
