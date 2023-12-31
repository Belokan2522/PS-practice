#include <stdio.h>

int main (void){
int N = 0, V = 0, count = 0;
scanf("%d", &N);
int num[N];

for(int i = 0; i<N; i++){
    scanf("%d",&num[i]);
}

scanf("%d", &V);

for(int i = 0; i<N; i++){
    if(num[i] == V){
        count++;
    }
}
printf("%d",count);
}