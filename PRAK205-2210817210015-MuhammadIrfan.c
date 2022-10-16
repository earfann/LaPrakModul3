#include<stdio.h>
#include<math.h>
    int main(){
        int alas, keliling, luas, A, B, C;
        printf("INPUT\n");
        printf("Sisi A      = ");
        scanf("%d", &A);
        printf("Sisi B      = ");
        scanf("%d", &B);
        C = sqrt(pow((B), 2)-pow((A), 2));
        keliling = A+B+C;
        luas = A*C/2;
        printf("OUTPUT\n");
        printf("Alas        = %d cm\n", C);
        printf("Tinggi      = %d cm\n", A);
        printf("Keliling    = %d cm\n", keliling);
        printf("Luas        = %d cm^2", luas);
        return 0;
    }