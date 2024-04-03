#include <stdio.h>

struct Point {
    int x;
    int y;
};

// Hàm in ra tọa độ của một điểm
void printPoint(struct Point p) {
    printf("Coordinates: (%d, %d)\\n", p.x, p.y);
}

int main() {
    struct Point p1 = {4, 9};
    printPoint(p1);

    return 0;
}
