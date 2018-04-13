#include <stdio.h>
#include <string.h>
int main()
{
    int count[10];
    int sum=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&count[i]);
        sum+=count[i];
    }
    char str[sum];
    for(int i=1;i<10;i++)
    {
        if(count[i]>0)
        {
            printf("%d",i);
            count[i]--;
            break;
        }
    }
    for(int i=0;i<10;i++)
    {
        while(count[i]>0)
        {
            printf("%d",i);
            count[i]--;
        }
    }
    return 0;
}
