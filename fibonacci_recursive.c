#include <stdio.h>
int fibonacci_recursive(int n){
    if (n <= 1){
        printf("bak bana\n");
        return  n;
    }
    return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
}
int main() {
    printf("%d " , fibonacci_recursive(10));
    return 0;
}
