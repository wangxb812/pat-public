#include <stdio.h>
#include <algorithm>
using namespace std;
#define MAX 100010
int a[MAX];
int N,p;
int binarySearch(int i,long long x)
{
    if(a[N-1]<=x)
        return N;
    int l=i+1,r=N-1,mid;
    while(l<r)
    {
        mid=(l+r)/2;
        if(a[mid]<=x)
        {
            l=mid+1;
        }
        else
        {
            r=mid;
        }
    }
    return l;
}
int main()
{

    scanf("%d %d",&N,&p);

    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+N);
    int res=1;
    for(int i=0;i<N;i++)
    {
        int j=binarySearch(i,(long long)a[i]*p);
        res=max(res,j-i);
    }
    printf("%d\n",res);
    return 0;
}
