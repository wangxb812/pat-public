//当我们验证卡拉兹猜想的时候，为了避免重复计算，可以记录下递推过程中遇到的每一个数。
//例如对n=3进行验证的时候，我们需要计算3、5、8、4、2、1，则当我们对n=5、8、4、2进行验证的时候，就可以直接判定卡拉兹猜想的真伪，而不需要重复计算，因为这4个数已经在验证3的时候遇到过了，
//我们称5、8、4、2是被3“覆盖”的数。我们称一个数列中的某个数n为“关键数”，
//如果n不能被数列中的其他数字所覆盖。
//输入格式：每个测试输入包含1个测试用例，第1行给出一个正整数K(<100)，
//第2行给出K个互不相同的待验证的正整数n(1<n<=100)的值，数字间用空格隔开。

//输出格式：每个测试用例的输出占一行，按从大到小的顺序输出关键数字。数字间用1个空格隔开，但一行中最后一个数字后没有空格。 
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include<malloc.h>
using namespace std;

void sort(int *P,int K)              //排序
{
    int i,j,temp;
    for(i=0;i<K;i++)
        for(j=i+1;j<K;j++)
        {

            if(P[i]<P[j])
            {
                temp=P[i];
                P[i]=P[j];
                P[j]=temp;
            }
        }
}
int main ()
{
	int K,temp;
	cin >> K;
	int *num_test;
	num_test = (int *)malloc(K*sizeof(int)); 
	for(int i=0;i<K;i++)
	{
        scanf("%d",&num_test[i]);
	}
	//cout<< K;
	for(int i=0;i<K;i++)
	{
		temp=num_test[i];
		if(temp==0)
		{
			continue; 
		} 
		while(temp!=1)
		{
			if(temp%2==0)
			temp/=2;
			else
			temp=(temp*3+1)/2;
			for(int j=0;j<K;j++)
			{
				if(num_test[j]==temp)
				{
					num_test[j]=0;
					break;
				}
			}
		}
	}
	sort(num_test,K);
	for(int i=0;num_test[i]>0;i++)
	{
		printf("%d%s",num_test[i],num_test[i+1]>0?" ":"");
	}
}
