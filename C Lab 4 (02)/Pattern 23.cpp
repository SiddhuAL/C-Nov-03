#include<stdio.h>
int main()
{
	int i,j,n,c,s=1;
	printf("\nGive a n value(No.of rows in the pattern):");
	scanf("%d",&n);
	printf("Give a c value(No. of colums in the pattern):");
	scanf("%d",&c);
	printf("\n");
	for(i=1;i<n+1;i++)
	{
		if(i%2!=0)
		{
			for(j=1;j<c;j++)
			{
				printf("%d",s);
			}
			printf("%d",s+1);
			s++;
			printf("\n");
		}
		else
		{
			printf("%d",s+1);
			for(j=1;j<c;j++)
			{
				printf("%d",s);
			}
			s++;
			printf("\n");
		}
	}
	return 0;
}
