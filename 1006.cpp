#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main()
{
	int num,temp=0,i=0;
	scanf("%d",&num);
	int *a;
	a=(int *)malloc(num*sizeof(int));
	while(num!=0)
	{
		temp=num%10;
		num/=10;
		a[i]=temp;
		i++;
	}
	if(a[2]!=0)
	{
		for(int j=0;j<a[2];j++)
		{
			printf("B");
		}
	}
	if(a[1]!=0)
	{
		for(int j=0;j<a[1];j++)
		{
			printf("S");
		}
	}
	if(a[0]!=0)
	{
		for(int j=0;j<a[0];j++)
		{
			printf("%d",j+1);
		}
	}
	//else printf("0");

	return 0;
}               
