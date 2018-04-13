#include<stdio.h>
#include<string.h>
#define MAX 1005
int hashTable[80]={0},miss=0;
int change(char c)
{
    if(c>='0'&&c<='9')
        return c-'0';
    if(c>='a'&&c<='z')
        return c-'a'+10;
    if(c>='A'&&c<='Z')
        return c-'A'+36;
}
int main()
{
    char a[MAX],b[MAX];
    gets(a);
    gets(b);
    int len1=strlen(a);
    int len2=strlen(b);
    for(int i=0;i<len1;i++)
    {
        int id=change(a[i]);
        hashTable[id]++;
    }
    for(int i=0;i<len2;i++)
    {
        int id=change(b[i]);
        hashTable[id]--;
        if(hashTable[id]<0)
        {
            miss++;
        }
    }
    if(miss>0) printf("NO %d\n",miss);
    else printf("YES %d\n",len1-len2);
    return 0;
}
//C++写法
/*
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    char sale[1005],red[1005];
    int temp[150]={0};
    gets(sale);
    gets(red);
    int len1=strlen(sale);
    char ch;
    for(int i=0;i<len1;i++){
        ch=sale[i];
        temp[ch]++;
    }
    int len2=strlen(red);
    int count1=0;   //少了多少颗
    int count2=len1-len2;//多了多少颗
    for(int i=0;i<len2;i++){
        ch=red[i];
        temp[ch]--;
        if(temp[ch]<0)  //多少个小于0以及小了多少决定少了多少颗珠子
            count1++;
    }
    if(count1==0)   printf("Yes %d",count2);//没少珠子，输出多了多少
    else printf("No %d",count1);
    return 0;
}
*/
