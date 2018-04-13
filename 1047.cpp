#include <stdio.h>
#define MAX 1010
int main()
{
    int N;
    scanf("%d",&N);
    int hashTable[MAX]={0};
    for(int i=0;i<N;i++)
    {
        int team,num,score;
        scanf("%d-%d %d",&team,&num,&score);
        hashTable[team]=hashTable[team]+score;
    }
    int k,temp=-1;
    for(int i=0;i<MAX;i++)
    {
        if(hashTable[i]>temp)
        {
            temp=hashTable[i];
            k=i;
        }
    }
    printf("%d %d\n",k,temp);
    return 0;
}
