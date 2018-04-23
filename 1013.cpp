#include<stdio.h>
#include <math.h>
#define max 1000001
bool isPrime(int n)
{
    if(n<=1)
    {
        return false;
    }
    int sqr=(int )sqrt(1.0*n);
    for(int i=2;i<=sqr;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int prime[max],num=0;
bool p[max]={0};
void findP(int n)
{
    for(int i=1;i<max;i++)
    {
        if(isPrime(i)==true)
        {
            prime[num++]=i;
            p[i]=true;
            if(num>=n)
                break;
        }
    }
}
int main()
{
    int m,n,count=0;
    scanf("%d%d",&m,&n);
    findP(n);
    for(int i=m;i<=n;i++)
    {
        printf("%d",prime[i-1]);
        count++;
        if(count%10!=0&&i<n)
           printf(" ");
        else printf("\n");
    }
    return 0;
}
