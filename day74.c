#include<stdio.h>
#include<string.h>

//question1:Take two filenames from the user – a source file 
//and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().


int main(){
    //FILE  *df;
   // df=fopen("file.txt","w");
    char ch;
    FILE *sf=fopen("source_file.txt","r");
    FILE *df=fopen("destination_file.txt","w");
    while(sf==NULL){
        printf("file cannot be open\n");
        return 1;
    }
    while((ch==fgetc(sf))!=EOF){

        fputc(ch,df);
    }
    fclose(sf);
    fclose(df);
    return 0;
   
}