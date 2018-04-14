#include <stdio.h>
#include <string.h>
#define MAX 100010
#define MOD 1000000007
int main()
{
    char str[MAX];
    gets(str);
    int len=strlen(str);
    int leftP[MAX]={0};
    for(int i=0;i<len;i++)
    {
        if(i>0)
        {
            leftP[i]=leftP[i-1];
        }
        if(str[i]=='P')
        {
            leftP[i]++;
        }
    }
    int res=0,rightT=0;
    for(int i=len-1;i>=0;i--)
    {
        if(str[i]=='T')
        {
            rightT++;
        }
        else if(str[i]=='A')
        {
            res=(res+leftP[i]*rightT)%MOD;
        }
    }
    printf("%d\n",res);
    return 0;
}
