#include <stdio.h>
#include <string.h>
int change(char c)
{
    if(c>='a'&&c<='z')  return c-'a';
    if(c>='A'&&c<='Z')  return c-'A';
}
int main()
{
    char str[1000];
    int hashTable[30]={0};
    gets(str);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
        {
            int num=change(str[i]);
            hashTable[num]++;
        }
    }
    int temp=0,c_num=0;
    for(int i=0;i<30;i++)
    {
        if(hashTable[i]>temp)
        {
            temp=hashTable[i];
            c_num=i;
        }
    }
    printf("%c %d",c_num+'a',temp);
    return 0;
}
