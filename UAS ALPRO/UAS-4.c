#include <stdio.h>

int main() {
    int n;
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int data[n];
    int sum = 0;

    
    printf("Masukkan data:\n");
    for (int i = 0; i < n; i++) {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
        sum += data[i];
    }

   
    printf("\nJumlah data: %d\n", sum);

  
    float average = (float)sum / n;
    printf("Rata-rata data: %.2f\n", average);

   
    if (n % 2 == 0) {
        float median = (float)(data[n / 2 - 1] + data[n / 2]) / 2;
        printf("Nilai tengah data: %.2f\n", median);
    } else {
        printf("Nilai tengah data: %d\n", data[n / 2]);
    }

    return 0;
}

