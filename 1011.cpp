#include<iostream>
#include<cstdio>
#include <stdlib.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    //long long op[10][3];
    long long int a,b,c;
    for(int i=0;i<T;i++)
    {
        scanf("%ld %lld %lld",&a,&b,&c);
        if(a+b>c)
        {
            printf("Case #%d: true\n",i+1);
        }else
        {
            printf("Case #%d: false\n",i+1);
        }
    }
    return 0;
}
