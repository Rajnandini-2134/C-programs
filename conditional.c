#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age");
    scanf("%d",&age);

    if(age>80){
    
        printf(" senior citizens \n");
    }
    else    {
        printf("not senior citizens \n");
    }

    return 0;
    
}