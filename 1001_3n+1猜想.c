#include<stdio.h>
#include<math.h> 
int main()
{
	int n,m=0;
	scanf("%d",&n);
	if(n!=1)
	{
		if(n % 2== 0)
		{
			n = n/2;
		}
		else if(n %2 == 1)
		{
		n=(3*n+1)/2;
		}
		m++;
	}
	printf("%d",&m);
	return 0; 
}
