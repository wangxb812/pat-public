#include<stdio.h>
int main()
{
    int a,b,d;
    scanf("%d %d %d",&a,&b,&d);//Ϊʲô�˴���long long��Ϊ����
    long long sum=a+b;
    int ans[31],num=0;
    do
    {
        ans[num++]=sum%d;
        sum/=d;
    }while(sum!=0);//while����dowhile��������
    for(int i=num-1;i>=0;i--)
    {
        printf("%d",ans[i]);
    }
    return 0;
}
