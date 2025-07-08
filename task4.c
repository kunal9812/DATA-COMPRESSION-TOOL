#include <stdio.h>
#include <string.h>
#include<ctype.h>

void runLengthEncode(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
    }
    printf("\n");
}

void runLengthDecode(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n; ) {
        char ch = str[i++];
        int count = 0;
        while (i < n && isdigit(str[i])) {
            count = count * 10 + (str[i] - '0');
            i++;
        }
        for (int j = 0; j < count; j++) {
            printf("%c", ch);
        }
    }
    printf("\n");
}

int main() {
    char input[200];
    int choice;

    printf("1. Compress\n2. Decompress\nEnter your choice: ");
    scanf("%d", &choice);
    getchar(); // consume newline

    if (choice == 1) {
        printf("Enter a string to compress: ");
        scanf("%s", input);
        printf("Compressed string: ");
        runLengthEncode(input);
    } else if (choice == 2) {
        printf("Enter a string to decompress: ");
        scanf("%s", input);
        printf("Decompressed string: ");
        runLengthDecode(input);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
