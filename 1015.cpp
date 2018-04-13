#include<stdio.h>
#include<math.h>
#include <string.h>
#include <algorithm>
#include <iostream>
using namespace std;
struct student
{
    char num[10];
    int de;
    int cai;
    int sum;
    int flag;
}stu[100010];
bool cmp(student a,student b)
{
    if(a.flag!=b.flag)  return a.flag<b.flag;
    else if(a.sum!=b.sum) return a.sum>b.sum;
    else if(a.de!=b.de) return a.de>b.de;
    else return strcmp(a.num,b.num)<0;
}
int main()
{
    int N,L,H;
    int m=0;//不及格人数
    scanf("%d %d %d",&N,&L,&H);
    for(int i=0;i<N;i++)
    {
        scanf("%s %d %d",stu[i].num,&stu[i].de,&stu[i].cai);
        stu[i].sum=stu[i].cai+stu[i].de;
        if(stu[i].cai<L||stu[i].de<L)
        {
            stu[i].flag=5;
            m++;
        }
        else if(stu[i].de>=H&&stu[i].cai>=H)
        {
            stu[i].flag=1;
        }
        else if(stu[i].de>=H&&stu[i].cai<H)
        {
            stu[i].flag=2;
        }
        else if(stu[i].de<H&&stu[i].cai<H&&stu[i].de>=stu[i].cai)
        {
            stu[i].flag=3;
        }
        else{
            stu[i].flag=4;
        }
    }
    //排序
    sort(stu,stu+N,cmp);
    printf("%d\n",N-m);
    for(int i=0;i<N-m;i++)
    {
        printf("%s %d %d\n",stu[i].num,stu[i].de,stu[i].cai);
    }
    return 0;
}
