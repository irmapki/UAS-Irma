#include <stdio.h>

void tigaelemen(int arr[], int n) {
    int satu , dua , tiga;

    satu = dua = tiga = -2000002;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > satu) {
            tiga = dua;
            dua = satu;
            satu= arr[i];
        } else if (arr[i] > dua && arr[i] != satu) {
            tiga = dua;
            dua = arr[i];
        } else if (arr[i] > tiga && arr[i] != dua && arr[i] != satu) {
            tiga = arr[i];
        }
    }

 
    printf("Tiga elemen terbesar adalah: %d, %d, %d\n", satu, dua , tiga);
}

int main() {
    int arr[] = {10, 4, 7, 3, 8, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    tigaelemen(arr, n);

    return 0;
}
