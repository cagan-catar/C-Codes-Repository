#include <stdio.h>     
#include <stdlib.h>

void BirlikCevir(int);
void OnlukCevir(int);

int main() {
    int number = 0, d1, d2, d3, d4;
    
    while (1) {
        printf("4 basamakli bir sayi girin (Cikis icin -1): ");
        scanf("%d", &number);
        
        if (number == -1) break;
        if (number < 1000 || number > 9999) {
            printf("Lutfen 4 basamakli bir sayi giriniz!\n\n");
            continue;
        }

        d1 = number % 10;          // Birler
        d2 = (number % 100) / 10;   // Onlar
        d3 = (number % 1000) / 100; // Yuzler
        d4 = number / 1000;         // Binler

        // Binler basamagi (1000 icin "Bir Bin" degil, sadece "Bin" denir)
        if (d4 > 1) {
            BirlikCevir(d4);
            printf(" Bin ");
        } else if (d4 == 1) {
            printf("Bin ");
        }

        // Yuzler basamagi (100 icin "Bir Yuz" degil, sadece "Yuz" denir)
        if (d3 > 1) {
            BirlikCevir(d3);
            printf(" Yuz ");
        } else if (d3 == 1) {
            printf("Yuz ");
        }

        // Onlar basamagi
        OnlukCevir(d2);

        // Birler basamagi öncesi bosluk
        if (d2 != 0 && d1 != 0) {
            printf(" ");
        }

        // Birler basamagi
        BirlikCevir(d1);
        
        printf("\n\n");
    }
    
    return 0;
}

void BirlikCevir(int number) {
    switch (number) {
        case 1: printf("Bir"); break;
        case 2: printf("Iki"); break;
        case 3: printf("Uc"); break;
        case 4: printf("Dort"); break;
        case 5: printf("Bes"); break;
        case 6: printf("Alti"); break;
        case 7: printf("Yedi"); break;
        case 8: printf("Sekiz"); break;
        case 9: printf("Dokuz"); break;
    }
}

void OnlukCevir(int number) {
    switch (number) {
        case 1: printf("On"); break;
        case 2: printf("Yirmi"); break;
        case 3: printf("Otuz"); break;
        case 4: printf("Kirk"); break;
        case 5: printf("Elli"); break;
        case 6: printf("Altmis"); break;
        case 7: printf("Yetmis"); break;
        case 8: printf("Seksen"); break;
        case 9: printf("Doksan"); break;
    }
}

	




