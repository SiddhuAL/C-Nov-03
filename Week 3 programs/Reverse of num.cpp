//This program prints the reverse of a number
#include<stdio.h>
int main()
{
	int N;
	printf("Enter a number:");
	scanf("%d",&N);
	int N_=N,reversedNUM =0;
	while(N!=0)
	{
		reversedNUM = reversedNUM*10 + N%10;
		N=N/10;
	}
	printf("\n\nThe reverse of number %d is %d",N_,reversedNUM);
	return 0;
}