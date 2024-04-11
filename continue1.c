#include<stdio.h>
int main()
{
    int n,i;
    for(int i=5;i<=50;i++){
        if(i%2!=0){
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}
