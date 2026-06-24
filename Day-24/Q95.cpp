#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50];
    int maxLen = 0, start = 0, len;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            len = i - start;

            if (len > maxLen) {
                maxLen = len;
                strncpy(longest, &str[start], len);
                longest[len] = '\0';
            }

            start = i + 1;
        }

        if (str[i] == '\0')
            break;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}