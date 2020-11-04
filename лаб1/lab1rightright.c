#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    float x;
    float y;
    printf("Input x, please:\n");
    scanf("%f", &x);

    if ((x >= -49 && x < -10) or (x > 0 && x < 10)) {
        y = 10 * x * x * x + 7 * x / 5 + 2;
        printf("y is %5.1f", y);
    } else if (x > 20) {
        y = -x + 9;
        printf("y is %5.1f", y);
    } else {
        printf("error");

    }

    printf("\n it is the end of the program");
    return 0;
}
