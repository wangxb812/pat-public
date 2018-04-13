#include <stdio.h>
#include <string.h>
#define MAX 80
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        char str[80];
        scanf("%s",str);
        int len=strlen(str);
        if(len<6)
        {
            printf("Your password is tai duan le.\n");
        }
        else
        {
            int a_flag=0,n_flag=0,luan_flag=0;
            for(int j=0;j<len;j++)
            {
                if(!((str[j]>='a'&&str[j]<='z')||(str[j]>='0'&&str[j]<='9')||str[j]=='.'))
                {
                    printf("Your password is tai luan le.\n");
                    luan_flag=1;
                    break;
                }
                if(!(str[j]>='a'&&str[j]<='z'||str[j]=='.'))
                {
                    a_flag=1;
                }
                if(!(str[j]>='0'&&str[j]<='9'||str[j]=='.'))
                {
                    n_flag=1;
                }
            }
            if(a_flag==0&&luan_flag==0)
            {
                printf("Your password needs shu zi.\n");
            }
            else   if(n_flag==0&&luan_flag==0)
            {
                printf("Your password needs zi mu.\n");
            }
            else if(luan_flag==0)
            {
                printf("Your password is wan mei.\n");
            }
        }
    }
    return 0;
}
