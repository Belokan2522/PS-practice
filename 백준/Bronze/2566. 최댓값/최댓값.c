#include <stdio.h>
int main (void){
    int N[9][9] = {0};
    int A = 0, B = 1, C = 1;
    for(int y = 0; y<9; y++){
        for(int x = 0; x<9; x++){
            scanf("%d",&N[x][y]);
            if (N[x][y]>A){
                A = N[x][y];
                B = x+1;
                C = y+1;
            }
        }
    }
    printf("%d\n%d %d",A,C,B);
    return 0;
}