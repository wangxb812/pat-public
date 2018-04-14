#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000
struct mooncake
{
    double store;
    double sell;
    double price;
}cake[1010];
bool cmp(mooncake a,mooncake b)
{
    return a.price>b.price;
}
int main()
{
    int N;double D;
    scanf("%d %lf",&N,&D);
    for(int i=0;i<N;i++)
    {
        scanf("%lf",&cake[i].store);
    }
    for(int i=0;i<N;i++)
    {
        scanf("%lf",&cake[i].sell);
        cake[i].price=cake[i].sell/cake[i].store;
    }
    sort(cake,cake+N,cmp);
    double sum=0;
    for(int i=0;i<N;i++)
    {
        if(cake[i].store<=D)
        {
            D-=cake[i].store;
            sum+=cake[i].sell;
        }
        else
        {
            sum+=cake[i].price*D;
            break;
        }
    }
    printf("%.2f\n",sum);
    return 0;
}
