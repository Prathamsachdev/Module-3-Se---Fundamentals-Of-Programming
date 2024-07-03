//Convert temperature Fahrenheit to Celsius

#include <stdio.h>

int main() {
    float fahren, cels;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahren);

    cels = (5.0 / 9.0) * (fahren - 32.0);

    printf("Temperature in Celsius: %.2lf\n", cels);

    return 0;
}

