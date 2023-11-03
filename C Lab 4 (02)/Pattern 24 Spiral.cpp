//This program prints the spiral pattern
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of rows in the spiral pattern:");
	scanf("%d",&n);
	
	int a[n][n],k=1;
	
	for(int i=0;i<(n+1)/2;i++)
	{
		for(int j=i;j<n-i;j++)
		a[i][j]=k++;
		for(int j=i+1;j<n-i;j++)
		a[j][n-i-1]=k++;
		for(int j=n-i-2;j>=i;j--)
		a[n-i-1][j]=k++;
		for(int j=n-i-2;j>i;j--)
		a[j][i]=k++;
	}
	
	printf("\n\nThe Spiral pattern is \n\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	return 0;	
}