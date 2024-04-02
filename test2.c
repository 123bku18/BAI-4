#include <stdio.h>

// Định nghĩa union Data
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    data.i = 10;
    printf("Integer: %d\\n", data.i);

    data.f = 3.14;
    printf("Float: %.2f\\n", data.f);
    printf("Integer: %d\\n", data.i);

    strcpy(data.str, "Hello");
    printf("String: %s\\n", data.str);

    return 0;
}
