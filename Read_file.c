#include <stdio.h>

int main(){
    char filePath[100];
    printf("\nCopy path to file:");
    scanf("%s", filePath);

    FILE * pF = fopen(filePath, "r");
    char buffer[255];
    
    if(pF == NULL){
        printf("Unable to open file!\n");
    }
    else{
        while(fgets(buffer, 255, pF) != NULL){
            printf("%s", buffer);
            }  
    }
    fclose(pF);
    printf("\n");
    return 0;
}
