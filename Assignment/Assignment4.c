#include <stdio.h>
#include <string.h>

enum ProductType {
    CLOTHING,
    SHOES,
    ELECTRONICS
};

union ProductDetails {
    char size[20];
    float weight;
};

struct Product {
    char Name[50];
    float Price;
    enum ProductType type;
    union ProductDetails details;
};

int main(){
    // luu san pham
    int num;
    printf("Nhap vao so luong san pham: ");
    scanf("%d", &num);
    struct Product product[num];

    // sử dụng vòng lặp để nhập thông tin cho nhiều sản phẩm
    for (int i=0; i<num; i++){
        printf ("\nProduct %d:\n", i+1);
        printf ("Enter product name: ");
        scanf("%s", product[i].Name);
        printf("Enter product price: ");
        scanf("%f", &product[i].Price);
        printf("Enter product type (0:clothing, 1: shoes, 2: electronics): ");
        scanf("%d", (int *)&product[i].type);
        if(product[i].type == CLOTHING || product[i].type == SHOES){
            printf("Enter size: ");
            scanf("%s", product[i].details.size);
        }
        else if (product[i].type == ELECTRONICS){
            printf("Enter weight: ");
            scanf("%f", &product[i].details.weight);
        }
    }

    char searchName[50];
    printf ("\nNhap ten mon hang ban muon tim kiem: ");
    scanf ("%s", searchName);

    for (int i=0; i<num; i++){
        if(strcmp(product[i].Name, searchName) == 0){
            printf("\n Product found!\n");
            printf("Name: %s\n", product[i].Name);
            printf("Price: %.2f\n", product[i].Price);
            printf("Type of product: %d\n", product[i].type);
            if(product[i].type == CLOTHING || product[i].type == SHOES){
                printf("Size of product: %s\n", product[i].details.size);
            } else if (product[i].type == ELECTRONICS) {
                printf("Weight of product: %.2f\n", product[i].details.weight);
            }
            return 0;
        }
    }
    printf("\n Product not found!\n");

    return 0;
}
