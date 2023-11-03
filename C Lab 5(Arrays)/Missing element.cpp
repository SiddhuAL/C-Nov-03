//This program prints the missing number from 1 to N
#include<stdio.h>
void arrayprint(int array[],int n)
{
	printf("\nThe given array is {");
	for(int i=0;i<n-1;i++)
	printf(" %d,",array[i]);
	printf(" %d }",array[n-1]);
}

int main()
{
	int n;
	printf("Enter the number of values required in Array:");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nAs mentioned in the question,size of array is N-1 so here N value is %d",n+1);
	
	for(int i=0;i<n;i++)
	{
		do
		{
			printf("\n %d.) Give a value from 1 to %d:",i+1,n+1);
			scanf("%d",&a[i]);
		} while(a[i]<1||a[i]>n+1);
	}
	
	arrayprint(a,n);
	
	
	for(int j=1;j<=n+1;j++)
	{
		int k=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]!=j)
			k++;
		}
		if(k==n)
		printf("\n\n!!The missing element in Array is %d !!",j);
	}
	return 0;
} 