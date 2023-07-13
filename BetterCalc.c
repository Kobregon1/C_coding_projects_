#include <stdio.h>
#include <string.h>
// Objective here will be to ask the user for 2 numbers and a special character

// Change to main 6 when using App_Menu.c
int main(){

    char operator;
    double num1;
    double num2;
    double result;
    char choiceCalc;

    do{
        printf("\nEnter a number: ");
        scanf("%lf", &num1);

        printf("Enter a second number: ");
        scanf("%lf", &num2);

        printf("Enter an operator (+, -, /, *): ");
        scanf(" %c", &operator);

        switch(operator){
            case '+':
            result = num1 + num2;
            break;
            
            
            case '-':
            result = num1 - num2;
            break;
            
            case '/':
            result = num1 / num2;
            break;
            

            case '*':
            result = num1 * num2;
            break;
            
            default:
            printf("%c is not valid", operator);
        }
        printf("\nCalculating.......\n");
        printf("\n%.01lf %c %.01lf = %.03f\n", num1, operator, num2, result);

        printf("\nPeform another calculation?(Y/N): ");
        scanf(" %c", &choiceCalc);
        getchar();
        choiceCalc = toupper(choiceCalc);
    } while (choiceCalc == 'Y');

    return 0;
}
