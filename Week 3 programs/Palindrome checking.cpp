//This program checks if given number is palindrome or not 
#include<stdio.h>
int main()
{
	int N;
	printf("Enter a number:");
	scanf("%d",&N);
	if(N<0)
	{
		printf("\nPlease enter a non-negative integer.");
		return 1;
		
	}
	int N_=N,reversedNUM =0;
	while(N!=0)
	{
		reversedNUM = reversedNUM*10 + N%10;
		N=N/10;
	}
	if(reversedNUM==N_)
	printf("The given number is a palindrome");
	else 
	printf("The given number is not a palindrome");
	return 0;
}