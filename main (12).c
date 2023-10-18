#include <stdio.h>

int somadigitos(int n) {
    if (n < 10) {
        return n;
    } else {
        int ultimodigito = n % 10;
        printf("%d\n", ultimodigito);
        int restonumero = n / 10;
        printf("%d\n\n", restonumero);
        return ultimodigito + somadigitos(restonumero);
    }
}

int main() {
    int n;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    printf("A soma dos dígitos de %d é %d\n", n, somadigitos(n));

    return 0;
}


