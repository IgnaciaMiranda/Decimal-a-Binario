#include <stdio.h>
#define TAM 32

int main(){
    int decimal, cociente, resto;
    char binario[TAM];
    int i = 0;

    printf("Ingrese un numero: ");
    if (scanf("%d", &decimal) != 1 || decimal < 0){
        printf(" Entada invalida. \n");
        return 1;
    }

    if(decimal == 0){
        printf("El numero binario es: 0\n");
        return 0;
    }

    while(decimal > 0){
        cociente = decimal / 2;
        resto = decimal % 2;
        binario[i++] = resto + '0';
        decimal = cociente;
    }

    printf("El numero binario es: ");
    for(int j = i - 1 ; j >= 0 ; j--){
        printf("%c", binario[j]);
    }

    printf("\n");

    return 0;
}
