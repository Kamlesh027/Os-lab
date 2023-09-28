#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char ch;
    int sc = 0;

    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    fp = fopen(argv[1], "r"); // Open the file in read mode

    if (fp == NULL) {
        printf("Unable to open file %s\n", argv[1]);
        return 1;
    } else {
        while ((ch = fgetc(fp)) != EOF) { // Use fgetc to read characters from the file
            if (ch == ' ') {
                sc++;
            }
        }
        printf("Number of spaces: %d\n", sc);
        fclose(fp); // Close the file when done
    }

    return 0;
}
