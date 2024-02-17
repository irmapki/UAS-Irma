#include <stdio.h>

void temukanelemen(int A[], int B[], int C[], int n1, int n2, int n3) {
    int p1 = 0, p2 = 0, p3 = 0;

    while (p1 < n1 && p2 < n2 && p3 < n3) {
        if (A[p1] == B[p2] && B[p2] == C[p3]) {
            printf("Elemen yang sama: %d\n", A[p1]);
            p1++;
            p2++;
            p3++;
        } else if (A[p1] < B[p2]) {
            p1++;
        } else if (B[p2] < C[p3]) {
            p2++;
        } else {
            p3++;
        }
    }
}

int main() {
    int A[] = {1, 5, 10, 20, 40, 80};
    int B[] = {6, 7, 20, 80, 100};
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = sizeof(A) / sizeof(A[0]);
    int n2 = sizeof(B) / sizeof(B[0]);
    int n3 = sizeof(C) / sizeof(C[0]);

    temukanelemen(A, B, C, n1, n2, n3);
    return 0;
}


