//һ������A�д���N��N>0�����������ڲ�����ʹ�����������ǰ���£�
//��ÿ������ѭ��������M��M>=0����λ�ã�����A�е������ɣ�A0 A1����AN-1��
//�任Ϊ��AN-M ���� AN-1 A0 A1����AN-M-1�������M����ѭ��������ǰ���M��λ�ã��������Ҫ���ǳ����ƶ����ݵĴ��������٣�Ҫ�������ƶ��ķ�����
//�����ʽ��ÿ���������һ��������������1������N ( 1<=N<=100)��M��M>=0������2������N��������֮���ÿո�ָ���

//�����ʽ����һ�������ѭ������Mλ�Ժ���������У�֮���ÿո�ָ������н�β�����ж���ո�

//����������
//6 2
//1 2 3 4 5 6
//���������
//5 6 1 2 3 4
#define _CRT_SECURE_NO_WARNINGS
#include <vector>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int N, op;
	int x=0;
	scanf("%d %d", &N, &op);
	int b[1000];
	for (int i = 0; i<N; i++)
	{
		cin >> b[i];
	}
	vector<int>a;
	for (int i = 0; i < N; i++)
	{
		if ((i + op) / N == 0)
		{
			a.push_back(b[i]);
		}
		else if ((i + op) / N == 1)
		{
			x = (i + op) % N;
			a.insert(a.begin() + x, b[i]);
		}
	}
	int i;
	for (i = 0; i<N-1; i++)
	{
		printf("%d ", a[i]);
	}
	printf("%d", a[i]);
	system("pause");
}
