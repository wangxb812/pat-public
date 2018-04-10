#include<stdio.h>
#include<math.h>
#include <iostream>
#define CLK_TLK 100
using namespace std;
int main()
{
    int c1,c2;
    cin >> c1>>c2;
    int ans=(c2-c1);//»ñÈ¡ÃëÊý
    if(ans%100>=50)
    {
        ans=ans/CLK_TLK+1;
    }
    else{
        ans=ans/CLK_TLK;
    }
    int hour = ans/3600;
    int minu = (ans%3600)/60;
    int sec = ans%60;
    printf("%02d:%02d:%02d\n",hour,minu,sec);
    return 0;
}
