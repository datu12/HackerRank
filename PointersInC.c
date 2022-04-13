#include <stdio.h>

void update(int *a,int *b) 
{
    // Complete this function    
    *a = *a + *b;
    *b = abs(*a - (2**b)); //Since *b is changed, we need to multiply it by 2, and then minus *b on the result of a, since *a becomes whatever the result is on the first solution.    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
