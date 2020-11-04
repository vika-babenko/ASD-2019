#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
  int i, j, left, right, mid, X;
  float elem;
  int const h = 10;
  int const w = 10;
  printf("Enter the element to find in the matrix : ");
  scanf_s("%i", &X);
  printf("Enter the height of the matrix : ");
  scanf_s("%i", &h);
  printf("Enter the width of the matrix : ");
  scanf_s("%i", &w);
  float matrix[h][w];
  for (i = 0; i < h; i++) {
    for (j = 0; j < w; j++) {
      scanf_s("%f", &elem);
      matrix[i][j] = elem;
    }
  }
  printf("\n");
  for (i = 0; i < h; i++) {
    for (j = 0; j < w; j++) {
      printf("%g  ", matrix[i][j]);
    }
    printf("\n");
  }
  for (i = 0; i < h; i++) {
    left = 0; right = w - 1; bool flag = false;
    while (left <= right) {
      mid = left + (right - left) / 2;
      if (matrix[mid][i] > X) {
        right = mid - 1;
      }
      else if (matrix[mid][i] < X) {
        left = mid + 1;
      }
      else if (matrix[mid][i] == X) {
        printf("There is such element at [%i][%i]\n", mid, i);
        flag = true;
        break;
      }
    }
    if (flag == false) {
      printf("There is no such element in the %i column of matrix\n", i + 1);
    }
  }
}
