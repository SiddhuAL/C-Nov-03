//This program prints the occurence of a given element in a user defined Array
#include<stdio.h>
int main()
{
	int n,k=0,ans;
	printf("Enter the number of values required in Array:");
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
	
	printf("\n\nEnter the number you wanna check in the Array:");
	scanf("%d",&ans);
	
	for(int i=0;i<n;i++)
	{
		if(a[i]==ans)
		k++;
	}
	
	printf("\nThe number %d is occured %d times in the given array.",ans,k);
	return 0;
}