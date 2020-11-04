#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main() {
    int k;
    int i;
    float m; //0|1
    float a;
    float b;
    int n;
    m = 1;
    scanf("%d", &n);
    scanf("%f", &a);
    scanf("%f", &b);
    printf("n = %d, a = %.3f, b= %.3f\n", n, a, b);
    float arr1[n];
    for(i=0;i<n;i++){
        arr1[i] = (float)(rand())/50;
        printf("%.8f ", arr1[i]);
    }
    printf("\n");
    //int arr1[5] = {1, 2, 3, 4, 5};
    for(k=0;k<n;k++){

        if(arr1[k]<33 && arr1[k]>11){
            arr1[k] = arr1[k] - 10;
        }
        else{
             arr1[k] = arr1[k] + 5*b;
        }
        printf("%.8f ", arr1[k]);
    }
    printf("\n");

        for(i=0;i<k;i++){
            arr1[i] = m*a*arr1[i];
            m = -m;
            printf("%.8f ", arr1[i]);
        }
        float min = arr1[0];
    for ( i=1;i<k;i++){
        if (arr1[i]<min){
            min = arr1[i];
        }
    }
    printf("\nR = %.8f", min);
    return 0;
}

