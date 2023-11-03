#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("\nGive a odd n value(No.of rows in the pattern):");
	scanf("%d",&n);
	n = (n-1)/2;
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
		for(s=0;s<n-i;s++)
		printf(" ");
		for(j=0;j<i+1;j++)
		printf("*");
		printf("\n");
		}
		else
		{
		for(s=0;s<n-i;s++)
		printf(" ");
		for(j=0;j<i+1;j++)
		printf("_");
		printf("\n");
		}
    }
    for(j=0;j<n+1;j++)
    printf("*");
    printf("\n");
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
		for(s=0;s<i+1;s++)
		printf(" ");
		for(j=0;j<n-i;j++)
		printf("_");
		printf("\n");
		}
		else
		{
		for(s=0;s<i+1;s++)
		printf(" ");
		for(j=0;j<n-i;j++)
		printf("*");
		printf("\n");
		}
    }

    return 0;
}
