#include <stdio.h>
int main2() {
    int n ;
    printf("count at ");
    scanf_s("%d", &n);
    for (int i = n; i <= 1; i--)
    {
        printf("%d", &i);
    }
    printf("time is up");
    return 0;
}