#include <stdio.h>
int main()
{
    int N,temp;
    int A1=0,A3=0;
    int count[5]={0};
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&temp);
        int ans=temp%5;
        switch(ans)
        {
        case 0:
            if(temp%2==0)
            count[0]+=temp;
            break;
        case 1:
            if(A1%2==0)
            {
                count[1]=count[1]+temp;
            }else
            {
                count[1]=count[1]-temp;
            }
            A1++;
            break;
        case 2:
            count[2]++;
            break;
        case 3:
            count[3]+=temp;
            A3++;
            break;
        case 4:
            if(temp>count[4])
            {
                 count[4]=temp;
            }
            break;
        }
    }
    if(count[0]==0)
    {
        printf("N ");
    }else printf("%d ",count[0]);
    if(count[1]==0)
    {
        printf("N ");
    }else printf("%d ",count[1]);
    if(count[2]==0)
    {
        printf("N ");
    }else printf("%d ",count[2]);
    if(count[3]==0)
    {
        printf("N ");
    }else
        printf("%.1f ",(double)(((double)count[3])/A3));
    if(count[4]==0)
    {
        printf("N");
    }else printf("%d",count[4]);
}
