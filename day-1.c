/*
    This is a prog that will demonsrtate the sum of two numbers
    the numbers will be provided as user inputs
*/

#include <stdio.h>

int main(){
    int number1;
    int number2;

    int shouldcontinue;



    do(
        printf("\nEnter the first number");
        scanf("%i", &number1);
        printf("\nEnter the second number");
        scanf("%i", &number2);
        printf("\nThe sum of %i + %i = %i", number1, number2, number1+number2);

        printf("\nDo you want to find the sum of another 2 numbers? (0-no, 1-yes)");
        scanf("%i", &shouldcontinue);
        if(!shouldcontinue){
            printf("Bye bye, see you soon");
        };

    );
    while (shouldcontinue == 1)
    

    return 0;
};