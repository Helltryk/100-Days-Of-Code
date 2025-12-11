#include<stdio.h>
#include<string.h>

//QUESTION1:Read a text file and count the total number of characters, words, and lines.
// A word is defined as a sequence of non-space characters separated by spaces or newlines.


int main() {
    FILE *p=fopen("data.txt", "r");
    char ch;
    int count =0;
    if (p == NULL) {
        printf("file cannot be open\n");
        return 1;
    }
    while ((ch = fgetc(p)) != EOF) {
        count++;
    }
    int i;
   while(ch[])

    printf("%d\n",count);
    fclose(p);

    return 0;
}
