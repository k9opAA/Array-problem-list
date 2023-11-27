#include <stdio.h>

void swapE(int arr[], int n, int m){
    int temp = arr[n];
    arr[n] = arr[m];
    arr[m] = temp;
}

int main(void) {
  int arr[] = {1, 2, 3, 4, 5};
  int n = 1;
  int m = 3;
  swapE(arr, n, m);
  for(int i = 0; i < 5; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}
