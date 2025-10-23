# 🟦 Cálculo da Área de um Retângulo — Linguagem C

## 📄 Descrição
Este projeto em **C** solicita ao usuário a **altura** e a **largura** de um retângulo e calcula a **área** automaticamente.  
É um exemplo didático para iniciantes aprenderem **entrada e saída de dados**, **operações matemáticas simples** e o uso da **biblioteca de localização** para suportar acentos em português.

---

## 📚 Bibliotecas Utilizadas

| Biblioteca | Função Principal | Observações |
|------------|-----------------|------------|
| `stdlib.h` | Funções utilitárias do sistema | Pode ser usada para `system()`, `malloc()`, `free()`. |
| `stdio.h`  | Entrada e saída | Permite usar `printf()` e `scanf()` para interação com o usuário. |
| `math.h`   | Funções matemáticas | Disponível para operações matemáticas avançadas, mesmo que não usada diretamente neste projeto. |
| `locale.h` | Localização | Permite configurar o idioma e suporte a acentuação. Ex.: `setlocale(LC_ALL, "Portuguese_Brazil.1252");` para Windows. |

---

## 💻 Código-Fonte

```c
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

    printf("Sua altura é %.2f, sua largura é %.2f, e a área calculada é %.2f\n", altura, largura, ar);

    return 0;
}
