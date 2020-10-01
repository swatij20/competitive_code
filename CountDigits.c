#include<stdio.h>

int main()
{
    int c=0,n,i,num;
    printf("enter a no.:\n");
    scanf("%d",&n);
    num=n;
    while(num!=0)
    {
        num=num/10;
        c+=1;
    }
    printf("no. of digits in %d is %d",n,c);
    return 0;
}