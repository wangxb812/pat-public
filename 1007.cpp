//让我们定义 dn 为：dn = pn+1 - pn，其中 pi 是第i个素数。显然有 d1=1 且对于n>1有 dn 是偶数。
//“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。
//现给定任意正整数N (< 105)，请计算不超过N的满足猜想的素数对的个数。
//输入格式：每个测试输入包含1个测试用例，给出正整数N。
//输出格式：每个测试用例的输出占一行，不超过N的满足猜想的素数对的个数。

//输入样例：
//20
//输出样例：
//4              
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;
bool is_prim(int n)
{
	int t=1;#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;
int is_prim(int n)
{
	int t = 1;
	if (n<2)
	{
		return 0;
	}
	for (int i = 2; i<sqrt(n) + 1; i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	return 1;// 0 not;1 is
}
int main()
{
	int N, prim_num = 0;
	cin >> N;
	for (int i = 3; i <=N-2; i++)
	{
		if (is_prim(i)&& is_prim(i+2))
		{
				prim_num++;
		}
	}
	cout << prim_num;
}
