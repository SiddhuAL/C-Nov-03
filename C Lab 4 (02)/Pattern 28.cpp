#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of rows in pattern:");
	scanf("%d",&n);
	
	printf("\nThe pattern is \n\n");
	int k=65;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		printf("%c ",k+i);
		printf("\n");
	}
	return 0;
}