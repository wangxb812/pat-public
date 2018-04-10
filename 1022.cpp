#include<stdio.h>
int main()
{
    int a,b,d;
    scanf("%d %d %d",&a,&b,&d);//为什么此处用long long型为错误？
    long long sum=a+b;
    int ans[31],num=0;
    do
    {
        ans[num++]=sum%d;
        sum/=d;
    }while(sum!=0);//while语句和dowhile语句的区别？
    for(int i=num-1;i>=0;i--)
    {
        printf("%d",ans[i]);
    }
    return 0;
}
