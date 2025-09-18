#include <stdio.h>
int main (){
    int kodehari;
    
    while (1){
        printf("Masukkan angka hari : (0 = keluar\n");
        scanf("%d", &kodehari);
    
        if (kodehari == 0){
            printf("Terima kasih\n");
            break;
        }
    if (kodehari == 7){
        printf("Angka %d adalah hari minggu\n", kodehari);
    }
    else if (kodehari == 1){
        printf("Angka %d adalah hari senin\n", kodehari);
    }
    else if (kodehari == 2){
        printf("Angka %d adalah hari selasa\n", kodehari);
    }
    else if (kodehari == 3){
        printf("Angka %d adalah hari rabu\n", kodehari);    
    }
    else if (kodehari == 4){
        printf("Angka %d adalah hari kamis\n", kodehari);
    }
    else if (kodehari == 5){
        printf("Angka %d adalah hari jumat\n", kodehari);
    }
    else if (kodehari == 6){
        printf("Angka %d adalah hari sabtu\n", kodehari);
    }
    else{
        printf("Angka %d bukan hari yang valid\n", kodehari);
    }
    }
}