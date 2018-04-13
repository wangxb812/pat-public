#include<stdio.h>
#define MAX 10
int main()
{
    int N;
    scanf("%d",&N);
    int num[MAX];
    int sum=0;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(j!=i)
            {
                sum+=num[i]*10+num[j];
            }
        }
    }
    printf("%d",sum);
    return 0;
}
