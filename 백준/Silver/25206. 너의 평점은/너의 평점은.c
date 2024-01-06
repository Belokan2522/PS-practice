#include <stdio.h>
#include <string.h>

int main(void){
    int l = 20;
    float c = 0, sum = 0;
    float n[20] = {0};
    char name[50], score[5];

    for(int i = 0;i<l;i++){
        scanf("%s %f %s",name, &n[i],score);
        if (strcmp(score, "A+")==0){
            c += 4.5 * n[i];
                 sum += n[i];
        }
        if (strcmp(score, "A0")==0){
            c += 4.0 * n[i];
                 sum += n[i];
        }
        if (strcmp(score, "B+")==0){
            c += 3.5 * n[i];
                 sum += n[i];
        }
        if (strcmp(score, "B0")==0){
            c += 3.0 * n[i];
                 sum += n[i];
        }
        if (strcmp(score, "C+")==0){
            c += 2.5 * n[i];
                 sum += n[i];
        }
        if (strcmp(score, "C0")==0){
            c += 2.0 * n[i];
                 sum += n[i];
        }
        if (strcmp(score, "D+")==0){
            c += 1.5 * n[i];
            sum += n[i];
        }
        if (strcmp(score, "D0")==0){
            c += 1.0 * n[i];
            sum += n[i];
        }
        if (strcmp(score, "F")==0){
            c += 0.0 * n[i];
            sum += n[i];
        }
    }

    float ans = 0;
    if (c!= 0){
        ans = c / sum;
    }
    else ans = 0;
    printf("%.6f",ans);

    return 0;
}