//This program is used to print sum of first N natural numbers
#include<stdio.h>
int main()
{
	int N;
	printf("Give any number:");
	scanf("%d",&N);
	printf("Natural numbers start with 1\nSum of first %d natural numbers is :",N);
	int i=1,S=0;
	while(i<=N)
	{
		S=S+i;
		i++;
	}
	printf("\t%d",S);
	return 0;
}
