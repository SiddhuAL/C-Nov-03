//This program prints the nth term of Fibanocci series
#include<stdio.h>
int main()
{
	int n;
	printf("The Fibanocci series goes like 0 0 1 2 3 5 8 .....");
	printf("\nEvery term is the sum of before 2 terms...");
	printf("\n\nEnter which term you wanna see (nth term):");
	scanf("%d",&n);
	int a[n];
	a[0]=0,a[1]=1;
	for(int i=2;i<n;i++)
	a[i]=a[i-1]+a[i-2];
	printf("\nThe %d term is %d",n,a[n-1]);
	return 0;
}