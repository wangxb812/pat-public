//��������֤�����Ȳ����ʱ��Ϊ�˱����ظ����㣬���Լ�¼�µ��ƹ�����������ÿһ������
//�����n=3������֤��ʱ��������Ҫ����3��5��8��4��2��1�������Ƕ�n=5��8��4��2������֤��ʱ�򣬾Ϳ���ֱ���ж������Ȳ������α��������Ҫ�ظ����㣬��Ϊ��4�����Ѿ�����֤3��ʱ���������ˣ�
//���ǳ�5��8��4��2�Ǳ�3�����ǡ����������ǳ�һ�������е�ĳ����nΪ���ؼ�������
//���n���ܱ������е��������������ǡ�
//�����ʽ��ÿ�������������1��������������1�и���һ��������K(<100)��
//��2�и���K��������ͬ�Ĵ���֤��������n(1<n<=100)��ֵ�����ּ��ÿո������

//�����ʽ��ÿ���������������ռһ�У����Ӵ�С��˳������ؼ����֡����ּ���1���ո��������һ�������һ�����ֺ�û�пո� 
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include<malloc.h>
using namespace std;

void sort(int *P,int K)              //����
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
