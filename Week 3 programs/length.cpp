//This program is used to find the length of a number
#include<stdio.h>
int main()
{
	int N;
	printf("Give any number :");
	scanf("%d",&N);
	int i=1;
	while(N!=0)
	{
		i++;
		N=N/10;
	}
	printf("The number of digits is %d",i-1);
}
