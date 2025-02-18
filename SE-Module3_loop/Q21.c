//. Accept 3 numbers from user using while loop and check each numbers palindrome

#include <stdio.h>
int main() {
  int n, reversed = 0, remainder, original;
    printf("Enter number : ");
    scanf("%d", &n);
    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        printf("Number %d is a palindrome.", original);
    else
        printf("Number %d is not a palindrome.", original);

    return 0;
}
