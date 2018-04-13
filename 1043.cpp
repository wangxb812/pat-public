#include <stdio.h>
#include <string.h>
#define MAX 10010
int main()
{
    char str[MAX];
    gets(str);
    char a[6]={'P','A','T','e','s','t'};
    int hashTable[6]={0};
    int len=strlen(str);int sum=0;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(str[i]==a[j])
            {
                hashTable[j]++;
                sum++;
            }
        }
    }
    while(sum>0)
    {
        for(int i=0;i<6;i++)
        {
            if(hashTable[i]>0)
            {
                printf("%c",a[i]);
                hashTable[i]--;
                sum--;
            }
        }
    }
    return 0;
}
