#include <stdio.h>
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int num[M],num_bool[M],num_flag[M];
    for(int i=0;i<M;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<M;i++)
    {
        scanf("%d",&num_bool[i]);
    }
    int sum[N]={0};
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            scanf("%d",&num_flag[j]);
            if(num_bool[j]==num_flag[j])
            {
                sum[i]+=num[j];
            }
        }
        printf("%d\n",sum[i]);
    }
    return 0;
}
