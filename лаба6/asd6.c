#include <stdio.h>
#include <time.h>
#include <math.h>
#define SWAP(A, B) { int t = A; A = B; B = t; }

void sortd(int m, int arr[m][m]) {
int i,j,temp;
printf("Begin \n");
for(i = 3; i<m; i=i+2){
temp = arr[0][i];
j = i-2;
while(j>=1 && arr[0][j]>temp){
SWAP(arr[0][j+2], arr[0][j]);//arr[0][j+2] = arr[0][j];
j = j-2;
}
for (int j=0; j<m; j++){
    printf("%i ", arr[0][j]);
}
printf("\n");
arr[0][j+2] = temp;
}
}
void cout(int m, int arr[m][m]){
int n=m;
for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++) {
int k_pr = 3;
int k = arr[i][j];
while((k/=10) != 0) k_pr -=1;
if (arr[i][j] >= 0) printf(" ");
printf("%d", arr[i][j]);
for(int p = 0; p < k_pr; p+=1){
printf(" ");
}
}
printf("\n");
}
}

int main()
{
int m;
srand(time(NULL));
scanf("%d", &m);
int ar[m][m];
for(int i = 0; i < m; i++){
for (int j = 0; j < m; j++) {
int k = (-50 + rand()%100);
ar[i][j] = k;
}
}
cout(m, ar);
printf("\n");
sortd(m, ar);
cout(m, ar);
return 0;
}
