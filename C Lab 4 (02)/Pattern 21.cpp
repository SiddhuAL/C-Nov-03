#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("Give starting value:");
	scanf("%d",&s);
	printf("\nGive a n value(No.of rows in the pattern):");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%d  ",s);
		}
		s++;
		printf("\n");
	}
	s--;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("%d  ",s);
		}
		s--;
		printf("\n");
	}
	return 0;
}
