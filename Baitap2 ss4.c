#include <stdio.h>

int main() {
    float a, b, c;

    printf("Nhap vao 3 canh cua tam giac:\n");
    printf("Canh a: ");
    scanf("%f", &a);
    printf("Canh b: ");
    scanf("%f", &b);
    printf("Canh c: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Tam giac deu.\n");
        } else if (a == b || b == c || a == c) {
            printf("Tam giac can.\n");
        } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            printf("Tam giac vuong.\n");
        } else {
            printf("Tam giac thuong.\n");
        }
    } else {
        printf("Khong phai tam giac.\n");
    }

    return 0;
}
