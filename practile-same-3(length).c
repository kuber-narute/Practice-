#include<stdio.h>
void main()
{
    float length,min=40,max=110;
    
    printf("enter lenth");
    scanf("%f",&lenth);
     
if( length<=min)
{
    printf ("length=min");
}
else if(length>=min && length<=max)
{
    printf("length=medium");
}
else
{
printf("length=max");
}

}