#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
    int n;
//  freopen("input.txt","r",stdin);
    char answer,ch;
    scanf("%d",&n);
    getchar();
    for(int i = 0;i < n;i++){
        for(int j = 0;j < 4;j++){
            scanf("%c-%c",&answer,&ch);
            getchar();
            if(ch=='T'){
                printf("%d",answer-'A'+1);
            }
        }
    }
    printf("\n");
    return 0;
}
