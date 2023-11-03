//This program prints the first and last digit and their sum
#include<stdio.h>
#include<math.h>
int len(int N)
{
	int i=0;
	while(N!=0)
	{
		N=N/10;
		i++;
	}
	return i;
}

int main()
{
	int N;
	printf("Enter a number:");
	scanf("%d",&N);
	int Ldig=N%10;
	int Fdig=N/pow(10,len(N)-1);
	printf("\nThe sum of first digit(%d) and last digit(%d) is %d",Fdig,Ldig,Fdig+Ldig);	
	return 0;
}