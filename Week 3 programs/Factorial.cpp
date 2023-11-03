//This program is used to print factorial of a number
#include<stdio.h>
int main()
{
	int N;
	printf("Give any number:");
	scanf("%d",&N);
	printf("Factorial of %d is :",N);
	int i=1,S=1;
	while(i<=N)
	{
		S=S*i;
		i++;
	}
	printf("\t%d",S);
	return 0;
}
