#include <stdio.h>
#include "stdlib.h"
#include "math.h"

int check_prime_num (int n){
    if (n<=1) return 0;
    for (int i=2; i<= sqrt(n); ++i){
        if (n%i==0) return 0;
    }
    return 1;
}

int main(int argc, char *argv[]){
    if (argc >= 3){
        printf ("Nhap sai cu phap, xin vui long thu lai.\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    if (a<1||b<a){
        printf ("nhap vao 2 so nguyen thoa man dieu kien: 1<=a<=b");
        return 1;
    }

    for(int i=a; i<=b; ++i){
        if(check_prime_num(i)){
            printf ("%d ", i);
        }
    }
    printf ("\n");
    return 0;
}
