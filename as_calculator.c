#include <stdio.h>

void main()
{
    int a, b, sum, sub, mul;
     div, power;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b;
    power = pow(a, b);

    printf("\nSum = %d", sum);
    printf("\nSubtraction = %d", sub);
    printf("\nMultiplication = %d", mul);
    printf("\nDivision = %.2f", div);
    printf("\nPower = %.2f", power);

    getch();
  
}