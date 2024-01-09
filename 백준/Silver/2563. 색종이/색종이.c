#include <stdio.h>
int main(void){
    int square[100][100] = {0};
    int n = 0, a = 0, b = 0, count = 0;
    scanf("%d",&n);

    for(int i = 0; i<n; i++){
        scanf("%d %d",&a,&b);
        for(int x = a; x<a+10; x++){
            for(int y = b; y<b+10; y++){
                square[y][x] = 1;
            }
        }
    }
    for(int y = 0; y<100; y++){
        for(int x =0; x<100; x++){
            if(square[y][x]==1){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}