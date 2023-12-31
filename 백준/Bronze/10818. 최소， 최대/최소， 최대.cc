#include <stdio.h>
int main (void){
    int N = 0;
    scanf("%d",&N);
    int num[N];
    int max = 0, min = 0;
    
    for(int i = 0; i<N; i++){
        scanf("%d", &num[i]);
    }
    max = num[0];
    for(int i = 1; i<N; i++){
        if(max<num[i]){
            max = num[i];
        }
    }
    min = num[0];
    for(int i = 1; i<N; i++){
    if(min>num[i]){
        min = num[i];
    }
    }
    printf("%d %d",min,max);
    return 0;
}
