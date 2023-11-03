//This program checks if given number is palindrome or not 
#include<stdio.h>
int palindrome(int N)
{
	int N_=N;
	int reversedNUM =0;
	while(N!=0)
	{
		reversedNUM = reversedNUM*10 + N%10;
		N=N/10;
	}
	if(reversedNUM==N_)
	return 1;
	else 
	return 0;
}
int main()
{

	int N;
	do
	{
		printf("Enter a non-negative integer:");
		scanf("%d",&N);
	}
	while (N<0);
	if(palindrome(N))
	printf("The given number is a palindrome");
	else
	printf("The given number is not a palindrome");

	return 0;
}