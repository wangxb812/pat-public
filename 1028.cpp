#include <stdio.h>
struct name
{
    char Pname[100];
    int Pyear;
    int Pmonth;
    int Pday;
}names[10000];
int main()
{
    int N;
    scanf("%d",&N);
    int BigY=0,BigM=0,BigD=0,Big=0,youthY=0,youthM=0,youthD=0,youth=0;
    int flag=0;
    for(int i=0;i<N;i++)
    {
        scanf("%s %d/%d/%d\n",&names[i].Pname,&names[i].Pyear,&names[i].Pmonth,&names[i].Pday);
    }
    for(int i=0;i<N;i++)
    {
                if((names[i].Pyear<2014)&&(names[i].Pyear>1814))
        {
            flag++;
            if(BigY<names[i].Pyear)
            {
                BigY=names[i].Pyear;
                Big=i;
            }
            else if(BigY==names[i].Pyear)
            {
                if(BigM<names[i].Pmonth)
                {
                    BigM=names[i].Pmonth;
                    Big=i;
                }
                else if(BigM==names[i].Pmonth)
                {
                    if(BigD<names[i].Pday)
                    {
                        BigD=names[i].Pday;
                        Big=i;
                    }
                }
            }
            if(youthY>names[i].Pyear)
            {
                youthY=names[i].Pyear;
                youth=i;
            }
            else if(youthY==names[i].Pyear)
            {
                if(youthM>names[i].Pmonth)
                {
                    youthM=names[i].Pmonth;
                    youth=i;
                }
                else if(youthM==names[i].Pmonth)
                {
                    if(youthD>names[i].Pday)
                    {
                        youthD=names[i].Pday;
                        youth=i;
                    }
                }
            }
        }
        else if(names[i].Pyear==2014&&names[i].Pmonth<=9&&names[i].Pday<=6)
        {
            flag++;
            if(BigY<names[i].Pyear)
            {
                BigY=names[i].Pyear;
                Big=i;
            }
            else if(BigY==names[i].Pyear)
            {
                if(BigM<names[i].Pmonth)
                {
                    BigM=names[i].Pmonth;
                    Big=i;
                }
                else if(BigM==names[i].Pmonth)
                {
                    if(BigD<names[i].Pday)
                    {
                        BigD=names[i].Pday;
                        Big=i;
                    }
                }
            }
            if(youthY>names[i].Pyear)
            {
                youthY=names[i].Pyear;
                youth=i;
            }
            else if(youthY==names[i].Pyear)
            {
                if(youthM>names[i].Pmonth)
                {
                    youthM=names[i].Pmonth;
                    youth=i;
                }
                else if(youthM==names[i].Pmonth)
                {
                    if(youthD>names[i].Pday)
                    {
                        youthD=names[i].Pday;
                        youth=i;
                    }
                }
            }
        }
        else if(names[i].Pyear==1814&&names[i].Pmonth>=9&&names[i].Pday>=6)
        {
            flag++;
            if(BigY<names[i].Pyear)
            {
                BigY=names[i].Pyear;
                Big=i;
            }
            else if(BigY==names[i].Pyear)
            {
                if(BigM<names[i].Pmonth)
                {
                    BigM=names[i].Pmonth;
                    Big=i;
                }
                else if(BigM==names[i].Pmonth)
                {
                    if(BigD<names[i].Pday)
                    {
                        BigD=names[i].Pday;
                        Big=i;
                    }
                }
            }
            if(youthY>names[i].Pyear)
            {
                youthY=names[i].Pyear;
                youth=i;
            }
            else if(youthY==names[i].Pyear)
            {
                if(youthM>names[i].Pmonth)
                {
                    youthM=names[i].Pmonth;
                    youth=i;
                }
                else if(youthM==names[i].Pmonth)
                {
                    if(youthD>names[i].Pday)
                    {
                        youthD=names[i].Pday;
                        youth=i;
                    }
                }
            }
        }
    }
    printf("%d %s %s",flag,names[Big].Pname,names[youth].Pname);
    return 0;
}
