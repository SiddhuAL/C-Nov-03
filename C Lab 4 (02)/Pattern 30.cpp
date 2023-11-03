#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of rows in pattern :");
	scanf("%d",&n);
	printf("\nThe pattern is :\n\n");
	
	for(int i=0;i<n-1;i++)
	{
		for(int s =0;s<i;s++)
		printf(" ");
		printf("*");
		for(int j=0;j<2*(n-i-2);j++)
		printf("_");
		printf("_*\n");
	}
	for(int i=0;i<n-1;i++)
	printf(" ");
	printf("*");
	return 0;
}
