#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);
    int i=0,p=0,q=0,ans=0;
    int str2[100];
    while(i<strlen(str)-4)
    {
        p=(int)(str[i]-'0');
        q=(int)(str[i+2]-'0');
        str2[ans]=p*q;
        ans++;
        str2[ans]=q-1;
        i+=4;
        ans++;
    }
    p=(int)(str[i]-'0');
    q=(int)(str[i+2]-'0');
    if(q!=0)
    {
        str2[ans]=p*q;
        ans++;
        str2[ans]=q-1;
        ans++;
    }else
    {
        str2[ans]='\0';
    }
    for(int j=0;j<ans;j++)
    {
        printf("%d ",str2[j]);
    }
    return 0;
}
