#include<stdio.h>
int main()
{
    int x,y,smallest;
    printf("Enter the number");
    scanf("%d",&x);
    printf("Enter the number");
    scanf("%d",&y);
    
    smallest=(x<y)?x:y;
    printf("%d",smallest);
    

    

    return 0;
}