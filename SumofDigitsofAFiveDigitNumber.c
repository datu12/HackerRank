#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    if (scanf("%d", &n) == 1 && 10000 <= n && n <= 99999)
    {
        int sum = n / 10000 + n / 1000 % 10 + n / 100 % 10 + n / 10 % 10 + n % 10;
        printf("%d\n", sum);
    }
    return 0;
}
