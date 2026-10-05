#include<stdio.h>
void main()
{
    float power,min=120,max=240;
    
    printf("enter power");
    scanf("%f",&power);
     
if( power<=min)
{
    printf ("power=low");
}
else if(power>=min && power<=max)
{
    printf("power=medium");
}
else
{
printf("power=high");
}

}