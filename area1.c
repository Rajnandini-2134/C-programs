#include<stdio.h>
int main()
{
    int r,l,b;

    printf("Enter the radius");
    scanf("%d",&r);
    printf("Enter the length and breadth");
    scanf("%d %d",&l,&b);

    printf("%d",3.14*r*r);
    printf("%d %d",l*b);

    return 0;
}