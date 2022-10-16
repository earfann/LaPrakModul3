#include<stdio.h>
    int main(){
        char nama[20], nim[20], kelas[20], ttl[30], alamat[30], hobby[20], hp[20];
        printf("INPUT\n");
        printf("Nama                    : "); gets(nama);
        printf("NIM                     : "); gets(nim);
        printf("Kelas Paralel           : "); gets(kelas);
        printf("Tempat/Tanggal Lahir    : "); gets(ttl);
        printf("Alamat                  : "); gets(alamat);
        printf("Hobby                   : "); gets(hobby);
        printf("No. HP                  : "); gets(hp);
        printf("OUTPUT\n");
        printf("Nama                    : %s\n", nama);
        printf("NIM                     : %s\n", nim);
        printf("Kelas Paralel           : %s\n", kelas);
        printf("Tempat/Tanggal Lahir    : %s\n", ttl);
        printf("Alamat                  : %s\n", alamat);
        printf("Hobby                   : %s\n", hobby);
        printf("No. HP                  : %s", hp);
        return 0;
    }