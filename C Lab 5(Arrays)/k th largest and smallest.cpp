//This program is to find kth largest or smallest value in a user given array
#include<stdio.h>
int main()
{
	int n,ans,k,t;
	printf("Enter number of values in the required array :");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("\n Give value %d :",i+1);
		scanf("%d",&a[i]);
	}
	
	printf ("\nThe given array is {");
	for(int i=0;i<n-1;i++)
	printf(" %d,",a[i]);
	printf(" %d }",a[n-1]);
	
	printf("\n\nEnter 1 for kth smallest or 2 for kth largest :");
	scanf("%d",&ans);
	
	if(ans==1)
	{
		printf("\nYou want to know kth smallest value in Array\nEnter the k value :");
		scanf("%d",&k);
		
		for(int i=0;i<k;i++)
		{
			for(int j=0;j<n-1;j++)
			{
				if(a[j+1]>a[j])
				{
					t = a[j+1];
					a[j+1]=a[j];
					a[j]=t;
				}
			}
		}
		
		printf("\nThe %d smallest value in array is %d",k,a[n-k]);
	}
	else if(ans==2)
	{
		printf("\nYou want to know kth largest value in Array\nEnter the k value :");
		scanf("%d",&k);
		
		for(int i=0;i<k;i++)
		{
			for(int j=0;j<n-1;j++)
			{
				if(a[j+1]<a[j])
				{
					t = a[j+1];
					a[j+1]=a[j];
					a[j]=t;
				}
			}	
		}
		printf("\nThe %d largest value in array is %d",k,a[n-k]);
	}
	return 0;	
}