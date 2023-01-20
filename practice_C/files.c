#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void writeOnFile(char fileName[]) {
    FILE* file;
    file = fopen(fileName, "w");

    if(file == NULL) {
        printf("File %s cannot be opened.", fileName);
    }

    fputs("C is a fun programming language.\n", file);
    fputs("And, love using C language.\n", file);

    fclose(file);
}

char* readFromFile(char fileName[]) {
    FILE* file;
    file = fopen(fileName, "r");

    char content[1000];
    char* result;
    result = (char*) malloc(2 * sizeof(char));

    while (fgets(content, 1000, file)) {
        strcat(result, content);
    }
    
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