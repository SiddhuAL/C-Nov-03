//This program is used to find the length of a number
#include<stdio.h>
int main()
{
	int j,N,K=0,s,d;
	printf("Give any number :");
	scanf("%d",&N);
	int i=0;
	d=N;
	while(d!=0)
	{
		i++;
		d=d/10;
	}
	printf("The number of digits is %d",i);
	printf("\n%d\n",N);
	for(j=0;j<i;j++)
	{
		while(s/10!=0)
		{
		s=N;
		s=s%(10^j);
		}
		K=K+s;
	}
	printf("\nSum of digits is %d",K);
	return 0;
}
