#include <stdio.h>

float fahr2celsius(float fahr);

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("Fahrenheit  Celsius\n");
    printf("-------------------\n");
    fahr = lower;
    while (fahr <= upper) {
        celsius = fahr2celsius(fahr);
        printf("%7.0f  %10.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}

float fahr2celsius(float fahr)
{
    return (5.0/9.0) * (fahr-32.0);
}
