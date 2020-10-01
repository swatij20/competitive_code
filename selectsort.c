#include<stdio.h>
void selectsort(int [],int);

void main()
{
        int a[100],n,i;
        printf("\nenter array size:");
        scanf("%d",&n);
        printf("\n--------enter array elements--------\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("\n------Sorted array--------\n");
        selectsort(a,n);
        for(i=0;i<n;i++)
        {
                printf("%d\t",a[i]);
        }
}

void selectsort(int a[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n;++i)
        {
		min=i;
		for(j=i+1;j<n;++j)
		{
			if(a[j]<a[min])
				min=j;
                }                
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
		
	}
}
