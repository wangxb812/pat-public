#include <stdio.h>
#include <math.h>
int main()
{
    double r1,r2,p1,p2;
    scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
    double a,b;
    a = (r1 * r2) * cos(p1 + p2);
    b = (r1 * r2) * sin(p1 + p2);
    if(-0.005<a&&a<0)
        printf("0.00");
    else printf("%.2f",a);
    if(b>=0)
        printf("+%.2fi\n",b);
    else if(-0.005<b&&b<0)
        printf("+0.00i\n");
    else printf("%.2fi\n",b);
    return 0;
}
