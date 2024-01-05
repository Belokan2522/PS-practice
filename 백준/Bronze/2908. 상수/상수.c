#include <stdio.h>

int main(void){
    int sa = 0, sb = 0;
    char A[4], B[4];
    scanf("%s %s", A, B);

    sa += (A[2]-48) * 100;
    sb += (B[2]-48) * 100;

    sa += (A[1]-48) * 10;
    sb += (B[1]-48) * 10;

    sa += A[0]-48;
    sb += B[0]-48;

    if(sa>sb)printf("%d",sa);
    if(sa<sb)printf("%d",sb);
    return 0;
}