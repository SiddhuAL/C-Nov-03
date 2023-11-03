#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of rows required:");
	scanf("%d",&n);
	printf("\n\nThe pattern is : \n\n");
	
	for(int i=0;i<n;i++)
	{
		int alpha = 64+n-i;
		for(int j=0;j<i+1;j++)
		{
			printf("%c",alpha);
			alpha++;
		}
		printf("\n");
	}
	return 0;
}
