#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: Include more header files (read the manpages to find out more!)
int main(int argc, const char *argv[]) {
    if (argc < 2) {
        printf("ERROR: No arguments\n");
        return 1;
    }

    int n = argc - 1;
    int mid = n / 2;

    // echo behavior
    if (n == 1) {
        printf("%s\n", argv[1]);
    } else if (n % 2 == 1) {  
        printf("%s\n", argv[mid + 1]);
    } else {  
        printf("%s %s\n", argv[mid], argv[mid + 1]);
    }

    return 0;
}
