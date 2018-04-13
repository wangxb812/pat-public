#include <stdio.h>
#include <string.h>
#define MAX 100010
int main()
{
    char a[MAX];//坏键
    char b[MAX];//应该输入
    bool hashTable[256]={true};
    gets(a);gets(b);
    int len1=strlen(a);
    int len2=strlen(b);
    for(int i=0;i<len2;i++)//有bug，检查不出来
    {
        int j;
        int flag=1;int sign=0;
        char c1,c2;
        c2=b[i];
        for(j=0;j<len1;j++)
        {
            c1=a[j];
            if(c1==c2|| (c2<='z' && c2>='a' && c2+'A'-'a'==c1))
            {
                hashTable[c2]=false;
                break;
            }
            if(c1=='+')
            {
                flag=0;
            }
        }
        if(j==len1&&hashTable[c2]==true)
        {
            if(flag==1)
            {
                printf("%c",c2);
                hashTable[c2]=false;
            }
            else if(flag==0)
            {
                if(c2>='A'&&c2<='Z')
                {
                    c2=c2-'A'+'a';
                    printf("%c",c2);
                    hashTable[c2]=false;
                }
                else
                {
                    printf("%c",c2);
                    hashTable[c2]=false;
                }
            }
        }
    }
    return 0;
}
/*
#include<stdio.h>
#include<string.h>

int main(void)
{
    int i=0,flag=0,sign=0;
    char badkey[100]={0},ch=0;
    gets(badkey);
    //while(getchar()!='\n');
    for(i=0;i < strlen(badkey);i++)
        if(badkey[i]=='+')
            flag=1;
    while((ch=getchar())!='\n')
    {
        sign=0;
        if(ch<='Z'&&ch>='A' && flag==1)
            continue;
        for(i=0;i < strlen(badkey);i++)
            if(ch==badkey[i] || (ch<='z' && ch>='a' && ch+'A'-'a'==badkey[i]))
            {
                sign=1;
                break;
            }
        if(sign==1)
            continue;
        printf("%c",ch);
    }
    return 0;
}
*/
