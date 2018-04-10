#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int Aflag=0,Bflag=0;
    int Amou,Ahand,Bmou,Bhand;
    for(int i=0;i<N;i++)
    {
        scanf("%d %d %d %d",&Amou,&Ahand,&Bmou,&Bhand);
        if(Ahand==(Amou+Bmou)&&Ahand!=Bhand)
        {
            Aflag++;
        }
         else if(Bhand==(Amou+Bmou)&&Ahand!=Bhand)
        {
            Bflag++;
        }
    }
    printf("%d %d",Bflag,Aflag);
    return 0;
}
