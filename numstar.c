#include <stdio.h>
int main() 
{

    int n,i=0,a=0,k=0,j=0;
    scanf("%d", &n);
    a=n;
  	// Complete the code to print the pattern.
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=(i-1);k++)
        printf(" ");
        for(j=1;j<=(n+1)-i;j++)
        {
            printf("%d",a);
        }
        a--;
        for(j=1;j<=(n+1)-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}