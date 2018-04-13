#include <stdio.h>
#include <string.h>
#define MAX 100010
int main()
{
    int N;
    scanf("%d",&N);
    char a[MAX];char b[MAX];
    int i,K;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&K);
    int k_flag[K]={0};
    for(i=0;i<K;i++)
    {
        scanf("%d",&b[i]);
        for(int j=0;j<N;j++)
        {
            if(a[j]==b[i])
            {
                k_flag[i]++;
            }
        }
        if(i!=K-1)
        {
            printf("%d ",k_flag[i]);
        }
        else
        {
            printf("%d",k_flag[i]);
        }
    }
    return 0;
}
