#include <stdio.h>
#include <string.h>

int main() {
    const char myCharsArray[] = "abcde";  
    const char* myCharsPointer = "qwert";

    printf("Size of myCharsPointer: %zu\n", sizeof(myCharsPointer)); 
    printf("Size of myCharsArray: %zu\n", sizeof(myCharsArray));

    printf("Memory address for myCharsArray: %p\n", (void *)myCharsArray);
    printf("Memory address for the first element in myCharsArray: %p\n", (void *)&myCharsArray[0]);
    printf("Memory address for myCharsPointer: %p\n", (void *)myCharsPointer);
    printf("Memory address for the first element in myCharsPointer: %p\n", (void *)&myCharsPointer[0]);

    printf("Value pointed by myCharsArray: %c\n", *myCharsArray);
    printf("Value pointed by myCharsPointer: %c\n", *myCharsPointer);

    return 0;
}
