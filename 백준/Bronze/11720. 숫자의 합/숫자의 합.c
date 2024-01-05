#include <stdio.h>
#include <string.h>

int main(void){
    int N = 0, sum = 0;
    scanf("%d",&N);
    char nums[N];
    scanf("%s", nums);
    for(int i = 0; i<N; i++){
        sum += nums[i]-48;
    }
    printf("%d",sum);
    return 0;
}
