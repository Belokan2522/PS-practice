#include <stdio.h>
int main(void){
    int x,y;
    int x1, x2, x3;
    int y1, y2, y3;

    scanf("%d",&x);
    scanf("%d",&y);
    
    y1 = y/100;
    y2 = (y%100)/10;
    y3 = y%10;

    printf("%d\n",x*y3);
    printf("%d\n",x*y2);
    printf("%d\n",x*y1);
    printf("%d\n",x*y);
    return 0;
}