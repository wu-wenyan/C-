#include <stdio.h>
#include <stdlib.h>

int main() {
    int R;
    double area,r,pi=3.1415;
    while(scanf("%d",&R)!= -1)
    {
        r = (double)R/2;
        area =r*r*pi;
        if ((area-(int)area)==0)
            printf("%d\n",(int)area);
        else
            printf("%.2f\n",area);
    }
    return 0;
}