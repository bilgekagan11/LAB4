#include <stdio.h>
int fibonacci_iterative(int n){
   int a = 0 , b = 1 ,c;
    if (n == 0){
        return  a;
    }else{
        int i ;
        for (i = 2; i<=n; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return  b;
    }
}
int main() {
    printf("%d", fibonacci_iterative(9));
    return 0;
}
