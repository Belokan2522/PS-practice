#include <stdio.h>
int main()
{
    int i;
    int s = 0;
    int cnt = 1;
    int arr[10] = { 0, };
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        arr[i] %= 42;
    }
    for (i = 1; i < 10; i++) {
        s = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                s = 1;
                break;
            }
        }
        if (s)
            continue;
        cnt++;
    }
    printf("%d\n", cnt);

    return 0;
}