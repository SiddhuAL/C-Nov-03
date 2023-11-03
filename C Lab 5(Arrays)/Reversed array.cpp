#include<stdio.h>
int main()
{
	int n;
	printf("How many values you will provide for this array:");
	scanf("%d",&n);
	int a[n],i,j,t;
	
	for(i=0;i<n;i++)
	{
		printf("\n Give value %d :",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\n The given array is { ");
	for(i=0;i<n-1;i++)
	printf(" %d ,",a[i]);
	printf(" %d }\n",a[n-1]);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			t=a[j+1];
			a[j+1]=a[j];
			a[j]=t;
		}
	}
	
	printf("\n The Reversed Array is { ");
	for(i=0;i<n-1;i++)
	printf(" %d ,",a[i]);
	printf(" %d }\n",a[n-1]);
	return 0;
}
