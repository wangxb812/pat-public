#include <stdio.h>
struct info
{
    long long test_num;
    int s_seat;
}StuInfo[1000];
int main()
{
    int N;
    scanf("%d",&N);
    long long test_n;
    int m_seat;
    int s_s;
    for(int i=0;i<N;i++)
    {
        scanf("%lld %d %d",&test_n,&m_seat,&s_s);
        StuInfo[m_seat].test_num=test_n;
        StuInfo[m_seat].s_seat=s_s;
    }
    int M,m_seek;
    scanf("%d",&M);
    for(int i=0;i<M;i++)
    {
        scanf("%d",&m_seek);
        printf("%lld %d\n",StuInfo[m_seek].test_num,StuInfo[m_seek].s_seat);
    }
    return 0;
}
