#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[50],n,i;
    printf("enter array size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter (%d)th element of array: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d th element of array: %d\n ",i+1,a[i]);

    }
    printf("----------reversed array----------\n ");
    for(i=n-1;i>=0;i--)
    {
          printf("%d\n ",a[i]);
    }
    return 0;
}