#include<stdio.h>
void main()
{
    float height,min=35,max=78;
    
    printf("enter height");
    scanf("%f",&height);
     
if( height<=min)
{
    printf ("height=short");
}
else if(height>=min && height<=max)
{
    printf("height=medium");
}
else
{
printf("height=tall");
}

}