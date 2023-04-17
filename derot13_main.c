// Program to undo the rot13 encryption

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function prototypes
void derot13(char *str);

int main(int argc, char *argv[]) {
    // Check for correct number of arguments
    if (argc != 1) {
        fprintf(stderr, "Usage: %s\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // Read in each line of input
    char *line = NULL;
    size_t linecap = 0;
    ssize_t linelen;
    while ((linelen = getline(&line, &linecap, stdin)) > 0) {
        // Remove newline character
        line[linelen - 1] = '\0';

        // Apply derot13 cipher
        derot13(line);

        // Print result
        printf("%s\n", line);
    }

    // Free memory
    free(line);

    return 0;
}

// Applies the derot13 cipher to the given string
void derot13(char *str) {
    // Iterate through each character in the string
    for (unsigned long i = 0; i < strlen(str); i++) {
        // Check if the character is a letter
        if (isalpha(str[i])) {
            // Check if the character is uppercase
            if (isupper(str[i])) {
                // Apply the derot13 cipher
                str[i] = ((str[i] - 'A') + 13) % 26 + 'A';
            } else {
                // Apply the derot13 cipher
                str[i] = ((str[i] - 'a') + 13) % 26 + 'a';
            }
        }
    }
}
