//This program deletes the duplicate elements from the Array
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of values required in the Array :");
	scanf("%d",&n);
	
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		printf("\n Give value %d :",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\nThe given array is {");
	for(int i=0;i<n-1;i++)
	printf(" %d,",a[i]);
	printf(" %d }",a[n-1]);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[j]==a[i]&&j!=i)
			{
				for(int k=j;k<n-1;k++)
				a[k]=a[k+1];
				n--;
			}
				
		}
	}
	
	printf("\n\nThe modified array is {");
	for(int i=0;i<n-1;i++)
	printf(" %d,",a[i]);
	printf(" %d }",a[n-1]);
}