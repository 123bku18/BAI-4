#include <stdio.h>
#include <stdlib.h>

// Macro để kiểm tra số nguyên tố
#define IS_PRIME(n) (is_prime(n))

// Hàm kiểm tra số nguyên tố
int is_prime(int num) {
    if (num <= 1) return 0; // Không phải là số nguyên tố nếu nhỏ hơn hoặc bằng 1
    if (num <= 3) return 1; // 2 và 3 là số nguyên tố

    // Kiểm tra xem num có chia hết cho các số từ 2 đến căn bậc hai của num hay không
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Nếu có số nào đó chia hết thì không phải là số nguyên tố
    }
    return 1; // Nếu không có số nào chia hết, num là số nguyên tố
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Sai cu phap. Hay nhap hai so nguyen duong a va b tren dong lenh.\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    if (a < 1 || b < a) {
        printf("Hai so nguyen duong nhap vao phai thoa man dieu kien 1 <= a <= b.\n");
        return 1;
    }

    printf("Cac so nguyen to trong khoang tu %d den %d la:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (IS_PRIME(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
