#include<stdio.h>
int main()
{
	int n;
	printf("How many values you will provide for this array:");
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
	{
		printf("\n Give value %d :",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\n The given array is { ");
	for(i=0;i<n-1;i++)
	printf(" %d ,",a[i]);
	printf(" %d }\n\n",a[n-1]);
	
	int min = a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		min = a[i];
	}
	printf(" The minimum value of the given array is %d",min);
	return 0;
}
	
