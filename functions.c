#include <stdio.h>

int add(int x, int y) {
    int z = x+y;
    return z;
}

int main() {
    int ans = add(1,2);
    printf("%d\n", ans);
    
    return 0;
}