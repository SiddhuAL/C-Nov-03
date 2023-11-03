#include<stdio.h>
int main()
{
	int i,j,k=1,n;
	printf("Give a n value(No.of rows in the pattern):");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=1;j<n+1-i;j++)
		{
			printf("%d  ",k);
			k++;
		}
		printf("\n");
	}
	return 0;
}
