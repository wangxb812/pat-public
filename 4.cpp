#include<stdio.h>
int  main()
{
	int n = 2,day=0;
	float money = 0, ave;
	while (n < 100)
	{
		money += 0.8*n;
		day++;
		n = n * 2;
	}
	ave = money / day;
	printf("%.6f\n", ave);
}
