#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	
   
   setlocale(LC_ALL, "Portuguese_Brazil.1252");
    float ar, altura, largura;

    printf("Digite a altura do projeto: ");
    scanf("%f", &altura);

    printf("Digite a largura do projeto: ");
    scanf("%f", &largura);

    ar = altura * largura;

    printf("Sua altura � %.2f, sua largura � %.2f, e a �rea calculada � %.2f\n", altura, largura, ar);

    return 0;
}
