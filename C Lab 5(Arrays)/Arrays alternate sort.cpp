#include<stdio.h>
int main()
{
	int i=1,n;
	
	while(i)
	{
	printf("How many values should be present in array(*SHOULD BE EVEN*):");
	scanf("%d",&n);
	if(n%2!=0)
	{
		printf("\n!!Enter a even number!!\n\n");
		i=1;
	}
	else i=0;
	}
	
	int t,a[n];
	for(i=0;i<n;i++)
	{
		printf("\n Give value %d :",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\nThe Array provided is {");
	for(i=0;i<n-1;i++)
	printf(" %d ,",a[i]);
	printf(" %d }\n\n",a[n-1]);
	
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			t=a[i+1];
			a[i+1]=a[i];
			a[i]=t;
		}
	}
	
	printf("The New Array according to question is {");
	for(i=0;i<n-1;i++)
	printf(" %d ,",a[i]);
	printf(" %d }\n",a[n-1]);
	return 0;
}
