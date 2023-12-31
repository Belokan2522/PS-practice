#include <stdio.h>

int main(void){
    int N = 30, isFound = 0;
    int students[N];
    int choolseok[N-2];

    for(int i = 0; i<N; i++){
        students[i] = i+1;
    }

    for(int i = 0; i<28; i++){
        scanf("%d",&choolseok[i]);
    }

    for(int x = 0; x<N; x++){
        for(int y = 0; y<N-2; y++){
            isFound = 0;
            if(students[x]==choolseok[y]){
                isFound = 1;
                break;
            }
        }
        if (isFound == 0){
                printf("%d\n",students[x]);
        }
    }
    return 0;
}