//��ά���飬�Կո�Ϊ�ֽ���
#include <stdio.h>
#include <cstring>
int main()
{
    char str[1000];
    gets(str);
    int len=strlen(str);
    int r=0,h=0;
    char ans[90][90];
    for(int i=0;i<len;i++)
    {
        if(str[i]!=' ')
        {
            ans[r][h++]=str[i];
        }
        else{
            ans[r][h]='\0';
            r++;
            h=0;
        }
    }
    for(int i=r;i>=0;i--)
    {
        printf("%s",ans[i]);
        if(i>0)
            printf(" ");
    }
    return 0;
 }
