#include <stdio.h>

int main(){
    
    // Open the file 
    FILE *filepointer = fopen("/home/mial/Desktop/file.txt", "r");

    // check the file openning 
    if (filepointer == NULL){
        printf("Error 404\n we couldn't open the file!\n");
        return 1;
    }

    // reading all the file char by char
    char ch;
    while ((ch = fgetc(filepointer)) != EOF){
        printf("%c", ch);
    }

    /*
    // reading a line max 100 char 
    char line[100];
    fgets(line, 100, filepointer);
    printf("%s", line);
    
    //read one word and stop in the first space
    char word[50]; 
    fscanf(filepointer, "%s", word);
    printf("%s/n", word);
    
    // setting the pointer localisation 

    fseek(filepointer, 0, SEEK_END);

    // Writing in the file 
    char name[10] = "";
    int age = 17;
    float grade = 12;

    printf("Give me your name");
    scanf("%s", name);

    fprintf(filepointer, "\nthis my full name: %s.", name);

    // Close the file
    fclose(filepointer);
    */

    return 0;
}

//i  will finish it later 