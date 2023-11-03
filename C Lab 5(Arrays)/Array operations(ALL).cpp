//This program is used to sort an array in AO,DO and find it's max and min value and it's average
#include<stdio.h>
int main()
{
	int n;
	printf("How many values you will provide for this array:");
	scanf("%d",&n);
	int i,j,t,a[n];
	for(i=0;i<n;i++)
	{
		printf("\n Give value %d :",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\n The given array is { ");
	for(i=0;i<n-1;i++)
	printf(" %d ,",a[i]);
	printf(" %d }\n",a[n-1]);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
			
		}
	}
	printf("\n The array in Ascending Order is { ");
	for(i=0;i<n-1;i++)
	printf(" %d ,",a[i]);
	printf(" %d }\n",a[n-1]);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
			
		}
	}
	printf("\n The array in Descending Order is { ");
	for(i=0;i<n-1;i++)
	printf(" %d ,",a[i]);
	printf(" %d }\n",a[n-1]);
	
	printf("\n The minimum value of the given array is %d\n",a[n-1]);
	printf("\n The maximum value of the given array is %d\n",a[0]);
	
	int sum =0;
	for(int i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	float avg = (float)sum/n;
	printf("\n The average of array is %.2f",avg);
	return 0;
}
