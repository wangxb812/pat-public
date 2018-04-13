#include <stdio.h>
#include <string.h>
void reverse(char str[])//·­×ª×Ö·û´®²Ù×÷
{
    int len=strlen(str);
    for(int i=0;i<len/2;i++)
    {
        int temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
}
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    reverse(a);
    reverse(b);
    int len1=strlen(a);
    int len2=strlen(b);
    int len=len1>len2?len1:len2;
    char res[100]={0};
    for(int i=0;i<len;i++)
    {
        int num1=i<len1?a[i]-'0':0;
        int num2=i<len2?b[i]-'0':0;
        if(i%2!=0)
        {
            int temp=num2-num1;
            if(temp<0)
            {
                temp+=10;
            }
            res[i]=temp+'0';
        }
        else if(i%2==0)
        {
            int temp=(num1+num2)%13;
            switch(temp)
            {
                case 10:
                    res[i]='J';
                    break;
                case 11:
                    res[i]='Q';break;
                case 12:
                    res[i]='K';break;
                default:
                    res[i]=temp+'0';
                    break;
            }
        }
    }
    reverse(res);
    puts(res);
    return 0;
}
