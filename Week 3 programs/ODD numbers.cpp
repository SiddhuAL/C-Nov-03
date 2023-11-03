//This program is used to print odd numbers from 1 to N
#include<stdio.h>
int main()
{
	int N;
	printf("Give any number:");
	scanf("%d",&N);
	printf("\nN = %d",N);
	printf("\nThe list of ODD numbers from 1 to %d are\n",N);
	if(N%2!=0)
	{
		int i=1;
		while(i<N)
		{
			if(i%2!=0) printf("%d\n",i);
			i++;
		}
	}
	if(N%2==0)
	{
		int i;
		while(i<=N)
		{
			if(i%2!=0) printf("%d\n",i);
			i++;
		}
	}
	printf("THE END");
	return 0;
}
