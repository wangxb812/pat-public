#include<stdio.h>
int change(char c)
{
    if(c=='B')  return 0;
    if(c=='C')  return 1;
    if(c=='J')  return 2;
}
int main()
{
    char mp[3]={'B','C','J'};
    int N;
    scanf("%d",&N);
    int A_count[3]={0},B_count[3]={0};//甲乙得出三种胜负统计
    int A_hand[3]={0},B_hand[3]={0};//三种手势获胜计数
    char a,b;int k1,k2;
    for(int i=0;i<N;i++)
    {
        getchar();
        scanf("%c %c",&a,&b);
        k1=change(a);k2=change(b);
        if((k1+1)%3==k2)
        {
            A_count[0]++;
            B_count[2]++;
            A_hand[k1]++;
        }else if(k1==k2)
        {
            A_count[1]++;
            B_count[1]++;
        }
        else
        {
            A_count[2]++;
            B_count[0]++;
            B_hand[k2]++;
        }
    }
    int A_flag=0,B_flag=0;
    for(int i=0;i<3;i++)
    {
        if(A_hand[i]>A_hand[A_flag]) A_flag=i;
        if(B_hand[i]>B_hand[A_flag]) B_flag=i;
    }
    printf("%d %d %d\n",A_count[0],A_count[1],A_count[2]);
    printf("%d %d %d\n",B_count[0],B_count[1],B_count[2]);
    printf("%c %c\n",mp[A_flag],mp[B_flag]);
    return 0;
}
