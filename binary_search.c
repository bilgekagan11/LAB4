#include <stdio.h>
int binarySearch(int arr[] , int f , int l , int choose ){
    int m  = 0;
    while (f<=l){
    m =  f + (l - f )/2;
    if (arr[m] == choose){
        printf("u find the number on middle\n");
        return  m;
    }
    if (arr[m]< choose){
     f = m+1;
    }else{
        l = m-1;
    }
    }
    printf("the number that you choosen not  exist\n");
    return -1;
}
