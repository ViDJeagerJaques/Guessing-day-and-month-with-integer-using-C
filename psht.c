#include <stdio.h>
int main(){
    int bulan;
    while (1)
    {
        printf("Masukkan angka bulan :(0 = untuk keluar)\n");
        scanf("%d", &bulan);
        if (bulan == 0){
            printf("Terima kasih\n");
            break;
        }
    if (bulan == 1){
         printf("Angka %d adalah bulan Januari\n", bulan);
        }
        else if (bulan == 2){
            printf("Angka %d adalah bulan Februari\n", bulan);
        }
        else if (bulan == 3){
            printf("Angka %d adalah bulan Maret\n", bulan);
        }
        else if (bulan == 4){
        printf("Angka %d adalah bulan April\n", bulan);    
    }
    else if (bulan == 5){
        printf("Angka %d adalah bulan Mei\n", bulan);
    }
    else if (bulan == 6){
        printf("Angka %d adalah bulan Juni\n", bulan);
    }
    else if (bulan == 7){
        printf("Angka %d adalah bulan Juli\n", bulan);
    }
    else if (bulan == 8){
        printf("Angka %d adalah bulan Agustus\n", bulan);
    }
    else if (bulan == 9){
        printf("Angka %d adalah bulan September\n", bulan);
    }
    else if (bulan == 10){
        printf("Angka %d adalah bulan Oktober\n", bulan);
    }
    else if (bulan == 11){
        printf("Angka %d adalah bulan November\n", bulan);
    }
    else if (bulan == 12){
        printf("Angka %d adalah bulan Desember\n", bulan);
    }
    else{
        printf("Angka %d bukan bulan yang valid\n", bulan);
    }
}
}