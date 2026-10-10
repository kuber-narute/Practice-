#include <stdio.h>

int main()
{
    int duty, period, i;

    printf("Enter duty cycle: ");
    scanf("%d", &duty);

    printf("Enter period: ");
    scanf("%d", &period);

    printf("PWM Simulation:\n");

    for (i = 0; i < period; i++)
    {
        if (i < duty)
            printf("1 ");
        else
            printf("0 ");
    }

    printf("\nFan Speed = %d%%", duty * 100 / period);

    return 0;
}
