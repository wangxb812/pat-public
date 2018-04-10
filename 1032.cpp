#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int num,score,temp_n=0,temp=-1;
    int s_score[100010]={0};
    for(int i=0;i<N;i++)
    {
        scanf("%d %d",&num,&score);
        s_score[num]+=score;
    }
    for(int i=0;i<100010;i++)
    {
        if(temp<s_score[i])
        {
            temp=s_score[i];
            temp_n=i;
        }
    }
    printf("%d %d\n",temp_n,temp);
    return 0;
}
