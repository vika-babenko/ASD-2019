#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int w, h, left, right, mid, flag;
    float elem, X;
    flag = 0;
    printf("Enter the element to find in the matrix : ");
    scanf("%f", &X);
    printf("Enter the height of the matrix : ");
    scanf("%d", &h);
    printf("Enter the width of the matrix : ");
    scanf("%d", &w);
    float matrix[h][w];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            scanf("%f", &elem);
            matrix[j][i] = elem;
        }
    }
    printf("\n");
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("%f  ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < h; i++) {
        left = 0, right = w - 1;
        while (left <= right) {
            mid = (left + right) / 2;
            if (matrix[i][mid] == X) {
                    flag = 1;
                printf("The element was found in M = %d, N = %d and its value is %.3f\n", i+1, mid+1, matrix[i][mid]);
                break;
            }
            else if (matrix[i][mid] < X) {
                right = mid - 1;
            }
            else if (matrix[i][mid] > X) {
                left = mid + 1;
            }
        }
    }
    if (!flag)
        printf("No element");
}
