#include <stdio.h>

int main() {
    char str[1000];
    int count[256] = {0};
    int maxCount = 0;
    char maxChar;
    int i;

    printf("Enter a string: ");
    
    for (i = 0; i < 999 && (str[i] = getchar()) != '\n'; i++);
    str[i] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxChar = (char)i;
        }
    }

    printf("The maximum occurring character is '%c' with %d occurrences.\n", maxChar, maxCount);

    return 0;
}

