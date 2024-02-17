#include <stdio.h>

int binarySearch(int arr[], int n, int target, int *steps) {

  int left = 0, right = n - 1;

  while (left <= right) {

    (*steps)++;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
      return mid;
    
    else if (arr[mid] < target)
      left = mid + 1;
    
    else
      right = mid - 1;
  }

  return -1;
}

int main() {

  int n;
  
  printf("Masukkan jumlah data mahasiswa: ");
  scanf("%d", &n);

  int scores[n];
  
  printf("Masukkan data mahasiswa (terurut): \n");
  for (int i = 0; i < n; i++)
    scanf("%d", &scores[i]);

  int target;
  
  printf("Masukkan data yang dicari: ");
  scanf("%d", &target);

  int steps = 0;

  int position = binarySearch(scores, n, target, &steps);

  if (position != -1)
    printf("Data %d ditemukan di posisi %d setelah %d langkah.\n", target, position + 1, steps);
  else
    printf("Data %d tidak ditemukan.\n", target);

  if(position == 0)
    printf("Data %d ditemukan di posisi pertama sebelum data ke dua.\n", target);

  return 0;
}