#include<stdio.h>
int main()
{
	int i,j,n,s=1;
	printf("\nGive a n value(No.of rows in the pattern):");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<n+1;i++)
	{
		printf("%d",s);
		for(j=1;j<i;j++)
		{
			printf("*%d",s);
		}
		s++;
		printf("\n");
	}
	s--;
	for(i=1;i<n+1;i++)	
	{
		printf("%d",s);
		for(j=1;j<n+1-i;j++)
		{
			printf("*%d",s);
		}
		s--;
		printf("\n");
	}
	return 0;
	
}
