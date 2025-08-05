#include <stdio.h>

int main() {
    int m, n, i;

    printf("Enter the number\n");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++) {
        m = i * n;
        printf("%d * %d is %d\n", n, i, m);
    }

    return 0;
}
