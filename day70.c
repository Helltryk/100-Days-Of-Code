#include<stdio.h>
#include<string.h>

//question1:Write a program to take a string input.
// Change it to sentence case.


int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert first character to uppercase
    if (str[0] != '\0') {
        str[0] = toupper(str[0]);
    }

    // Convert all other characters to lowercase
    for (int i = 1; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("Sentence case: %s", str);

    return 0;
}

