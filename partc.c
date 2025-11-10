#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: Include more header files (read the manpages to find out more!)
int main(int argc, const char *argv[]) {
    if (argc < 3) {
        printf("ERROR: No arguments\n");
        return 1;
    }
    const char *word = argv[1];
    const char *filename = argv[2];

    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("ERROR: %s doesn't exist\n", filename);
        return 2;
    }
    char line[512];
    int found = 0;
    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, word)) {
            found = 1;
            break;
        }
    }

    fclose(file);
    if (found) {
        printf("FOUND: %s\n", word);
        return 0;
    } else {
        printf("NOT FOUND: %s\n", word);
        return 0;
    }
}
