/**
 * Author : Maulidan Nashuha
 * Date : 2 Oktober 2019
 * IG & Github : @maulidandev
 */

#include <stdio.h>

// prototipe
void menu();
void addition();
void subtraction();
void multiplication();
void division();

int main(int argc, char const *argv[])
{
    int choise;

    do
    {
        menu();
        printf("Pilihan : ");
        scanf(" %d", &choise);
        switch (choise)
        {
            case 1:
                addition();
                break;
            
            case 2:
                subtraction();
                break;

            case 3 : 
                multiplication();
                break;

            case 4 : 
                division();
                break;

            case 5:
                break;

            default:
                printf("Harap periksa kembali inputan Anda.");
                break;
        }
    } while (choise != 5);
    // ulangi selama user tidak memilih keluar

    return 0;
}

// keluar menu
void menu(){
    printf("Menu : \n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Keluar\n");
}

// handle untuk penjumlahan
void addition(){
    int n;

    printf("Masukkan banyaknya angka : ");
    scanf(" %d", &n);

    float digits;
    float result = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Masukkan angka ke %d : ", i+1);
        scanf(" %f", &digits);

        result += digits;
    }
    
    printf("Hasil : %g\n\n", result);
}

// handle untuk pengurangan
void subtraction(){
    int n;

    printf("Masukkan banyaknya angka : ");
    scanf(" %d", &n);

    float digits;
    float result = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Masukkan angka ke %d : ", i+1);
        scanf(" %f", &digits);

        if (i == 0)
            result = digits;
        else
            result -= digits;
    }
    
    printf("Hasil : %g\n\n", result);
}

// handle untuk perkalian
void multiplication(){
    int n;

    printf("Masukkan banyaknya angka : ");
    scanf(" %d", &n);

    float digits;
    float result = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Masukkan angka ke %d : ", i+1);
        scanf(" %f", &digits);

        if (i == 0)
            result = digits;
        else
            result *= digits;
    }
    
    printf("Hasil : %g\n\n", result);
}

// handle untuk pembagian
void division(){
    int n;

    printf("Masukkan banyaknya angka : ");
    scanf(" %d", &n);

    float digits;
    float result = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Masukkan angka ke %d : ", i+1);
        scanf(" %f", &digits);

        if (i == 0)
            result = digits;
        else
            result /= digits;
    }
    
    printf("Hasil : %g\n\n", result);
}