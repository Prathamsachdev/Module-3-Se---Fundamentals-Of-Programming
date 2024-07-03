//Convert days into months

#include <stdio.h>

int main() {
    int total_days, months;

    printf("Enter the number of days: ");
    scanf("%d", &total_days);

    months = total_days / 30;

    printf("%d months\n",months);

    return 0;
}

