#include<stdio.h>
int main()
{
    long long A,B,Da,Db;
    scanf("%lld %lld %lld %lld",&A,&B,&Da,&Db);
    long long Pa=0,Pb=0;
    while(A!=0)
    {
        if(A%10==Da)    Pa=Pa*10+Da;
        A=A/10;
    }
    while(B!=0)
    {
        if(B%10==Db)    Pb=Pb*10+Db;
        B=B/10;
    }
    printf("%lld\n",Pa+Pb);
    return 0;
}
