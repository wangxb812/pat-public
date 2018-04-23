#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    double num[N];
    for(int i=0;i<N;i++)
    {
        scanf("%lf",&num[i]);
    }
    double sum=0;
    for(int i=0;i<N;i++)
    {
        sum+=num[i]*(i+1)*(N-i);
    }
    printf("%.2f\n",sum);
    return 0;
}
