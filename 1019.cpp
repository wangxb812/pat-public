#include <stdio.h>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
void num_to_array(int n,int num[])
{
    for(int i=0;i<4;i++)
    {
        num[i]=n%10;
        n/=10;
    }
}
int char_to_num(int num[])
{
    int sum=0;
    for(int i=0;i<4;i++)
    {
        sum=sum*10+num[i];
    }
    return sum;
}
int main()
{
    int n;
    int MIN,MAX;
    scanf("%d",&n);
    int num[5];
    while(1)
    {
        num_to_array(n,num);
        sort(num,num+4);
        MIN=char_to_num(num);
        sort(num,num+4,cmp);
        MAX=char_to_num(num);
        n=MAX-MIN;
        printf("%04d - %04d = %04d\n",MAX,MIN,n);
        if(n==0||n==6174) break;
    }
    return 0;
}
