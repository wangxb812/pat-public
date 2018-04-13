#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[80];
    char b[80];
    bool hashTable[128]={false};
    gets(a);gets(b);
    int len1=strlen(a);
    int len2=strlen(b);
    char temp[80]={0};int res=0;
    for(int i=0;i<len1;i++)
    {
        int j;
        char c1,c2;
        for(j=0;j<len2;j++)
        {
            c1=a[i];
            c2=b[j];
            if(c1>='a'&&c1<='z') c1-=32;
            if(c2>='a'&&c2<='z') c2-=32;
            if(c1==c2) break;
        }
        if(j==len2&&hashTable[c1]==false)
        {
            printf("%c",c1);
            hashTable[c1]=true;
        }
    }
    return 0;
}
