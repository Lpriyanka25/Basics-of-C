#include <stdio.h>
int main()
{
	int a[100],n,i,j,t;
	printf("\n Array size:");
	scanf("%d",&n);
	printf("Enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]<a[i])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n\nDecending order is:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
