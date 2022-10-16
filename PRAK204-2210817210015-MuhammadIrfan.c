#include<stdio.h>
#include<math.h>
    int main(){
        float jari, tinggi, volume, luas, keliling;
        printf("INPUT\n");
        printf("Jari-jari   = ");
        scanf("%f", &jari);
        printf("Tinggi      = ");
        scanf("%f", &tinggi);
        volume = 22*pow((jari), 2)*tinggi/7;
        luas = 2*22*jari*(jari+tinggi)/7;
        keliling = 2*22*jari/7;
        printf("OUTPUT\n");
        printf("Volume      = %.2f\n", volume);
        printf("Luas        = %.2f\n", luas);
        printf("Keliling    = %.2f", keliling);
        return 0;
    }