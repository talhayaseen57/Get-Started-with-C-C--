#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void writeOnFile(char fileName[]) {
    FILE* file;
    file = fopen(fileName, "w");

    if(file == NULL) {
        printf("File %s cannot be opened.", fileName);
        return;
    }

    char* content;
    content = (char*) malloc(1000 * sizeof(char));

    printf("Enter the content you want to write in the file.!\n");
    printf("To end the program, Press Enter <-'\n");

    while (1) {
        fgets(content, 1000, stdin);
        if (!(strcmp(content, "\n"))) break;

        fputs(content, file);
    }

    fclose(file);
}

char* readFromFile(char fileName[]) {
    FILE* file;
    file = fopen(fileName, "r");

    if(file == NULL) {
        printf("File %s cannot be opened.", fileName);
        return "";
    }

    char content[1000];
    char* result;
    result = (char*) malloc(2 * sizeof(char));

    while (fgets(content, 1000, file)) {
        strcat(result, content);
    }
    
    // fclose(file);
    return result;
}

int main() {
    char fileName[20] = "file.txt";
    char* contentOfFile;

    // writeOnFile(fileName);
    contentOfFile = readFromFile(fileName);

    printf("%s", contentOfFile);

    return 0;
}