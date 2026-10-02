#include<stdio.h>

void main()
{
    float weight;

    printf("Enter weight: ");
    scanf("%f",&weight);

    if(weight < 40)
        printf("Weight = Low");
    else if(weight <= 70)
        printf("Weight = Normal");
    else
        printf("Weight = High");

    getch();
}