//harry potter
#include <stdio.h>
#define g 29*17
#define s 29
struct coin
{
    int gallon;
    int sickle;
    int knut;
}coins[2];
int main()
{
    scanf("%d.%d.%d %d.%d.%d",&coins[0].gallon,&coins[0].sickle,&coins[0].knut,&coins[1].gallon,&coins[1].sickle,&coins[1].knut);
    int price = coins[0].gallon*g+coins[0].sickle*s + coins[0].knut;
    int money = coins[1].gallon*g+coins[1].sickle*s + coins[1].knut;
    int change = money-price;
    if(change <0)
    {
        printf("-");
        change = -change;
    }
    printf("%d.%d.%d\n",(change/g),(change%g/s),change%s);
    return 0;

}
