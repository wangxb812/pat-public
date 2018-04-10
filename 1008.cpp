//一个数组A中存有N（N>0）个整数，在不允许使用另外数组的前提下，
//将每个整数循环向右移M（M>=0）个位置，即将A中的数据由（A0 A1……AN-1）
//变换为（AN-M …… AN-1 A0 A1……AN-M-1）（最后M个数循环移至最前面的M个位置）。如果需要考虑程序移动数据的次数尽量少，要如何设计移动的方法？
//输入格式：每个输入包含一个测试用例，第1行输入N ( 1<=N<=100)、M（M>=0）；第2行输入N个整数，之间用空格分隔。

//输出格式：在一行中输出循环右移M位以后的整数序列，之间用空格分隔，序列结尾不能有多余空格。

//输入样例：
//6 2
//1 2 3 4 5 6
//输出样例：
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
