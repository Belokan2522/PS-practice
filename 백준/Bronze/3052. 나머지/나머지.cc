#include <stdio.h>

int main(void){
    int n = 42;
    int remain[n];
    int cnt[42] = {0,};
    int num[10];
    int count = 0;
    for (int i = 0; i<n; i++){
        remain[i] = i;
    }

    for(int i = 0; i<10; i++){
        scanf("%d",&num[i]);
    }
    for(int i = 0; i<10; i++){
        num[i] = num[i] % 42;
    }

    for(int i = 0; i<n; i++){
        for(int x = 0; x<10; x++){
        if (remain[i] == num[x]){
            cnt[i] = 1;
        }
        }
    }
    for(int i = 0; i<n; i++){
        if(cnt[i] == 1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}