#include <stdio.h>
int main()
{
    int N;char c;
    scanf("%d %c",&N,&c);
    int row,colum=N;
    if(N%2==0)
    {
        row=N/2;
    }
    else{
        row=N/2+1;
    }
    for(int i=1;i<=row;i++)
    {
        if(i==1||i==row)
        {
            for(int j=0;j<colum-1;j++)
            {
                printf("%c",c);
            }
            printf("%c\n",c);
        }
        else
        {
            for(int j=0;j<colum;j++)
            {
                if(j==0)
                {
                    printf("%c",c);
                }
                else if(j==colum-1)
                {
                    printf("%c\n",c);
                }
                else
                {
                    printf(" ");
                }
            }
        }
    }
    return 0;
}
