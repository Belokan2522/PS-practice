#include <stdio.h>
int main(void){
    int N= 0, M = 0;
    float evg = 0;
    scanf("%d",&N);
    float score[N];
    for(int i = 0; i<N; i++){
        scanf("%f", &score[i]);
        if(score[i]>M){
            M = score[i];
        }
    }
    for(int i = 0; i<N; i++){
       score[i] = score[i]/M*100;
       evg += score[i];
    }
    evg = evg/N;
    printf("%f", evg);
    return 0;
}