 #include <stdio.h>
 int main(void){
    int n = 9, max = 0, maxnum = 1;
    int num[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&num[i]);
    }
    max = num[0];
    for(int i = 1; i<n; i++){
        if(max<num[i]){
            max = num[i];
            maxnum = i+1;
        }
    }
    printf("%d\n%d",max,maxnum);
    return 0;
 }