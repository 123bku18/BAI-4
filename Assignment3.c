#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>

void print_int (){
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);
}

void print_double (){
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Range of double: %e to %e\n", DBL_MIN, DBL_MAX);
}

void print_float (){
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Range of float: %e to %e\n", FLT_MIN, FLT_MAX);
}

void print_char (){
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Range of char: %d to %d\n", CHAR_MIN, CHAR_MAX);
}

int main(){
    char data_type [20];
    printf ("Nhap vao kieu du lieu ban muon kiem tra: ");
    scanf ("%s", &data_type);

    if (strcmp(data_type, "all")==0){
        printf("\nInformation for all data type:\n");
        printf("--------------------------------\n");
        print_int();
        print_char();
        print_double();
        print_float();
    }

    else if (strcmp(data_type, "int")==0){
        printf("\nInformation for int data type:\n");
        printf("--------------------------------\n");
        print_int();
    }

    
    else if (strcmp(data_type, "char")==0){
        printf("\nInformation for char data type:\n");
        printf("--------------------------------\n");
        print_char();
    }

    else if (strcmp(data_type, "float")==0){
        printf("\nInformation for float data type:\n");
        printf("--------------------------------\n");
        print_float();
    }

    else if (strcmp(data_type, "double")==0){
        printf("\nInformation for double data type:\n");
        printf("--------------------------------\n");
        print_double();
    }

    else {
        printf ("No valid data entered \n");
    }

    return 0;
}