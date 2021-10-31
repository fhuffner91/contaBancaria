#include <stdio.h>
int main() {
    float soma=0;
    float valor;
    int opcao;
    do{
        printf("\nMENU DE OPCOES");
        printf("\n n 1. Deposito");
        printf("\n n 2. Saque");
        printf("\n n 3. Saldo");
        printf("\n n 4. Sair");
        printf("\n Informe uma opção:   ");
        scanf("%d", &opcao);
        switch(opcao) {
               case 1:
                   printf("\n Informe o valor:  ");
                   scanf("%f", &valor);
                   soma += valor;
                   break;
               case 2:
                   printf("\n Informe o valor:  ");
                   scanf("%f",&valor);
                   soma -= valor;
                break;
               case 3:
                   printf("\n Saldo atual = R$ %.2f", soma);
                   break;
               case 4:
                    printf("\n Saindo...");
                    break;



               default:
                    printf("\n Opção invalida!");


        }
    } while (opcao != 4);
    printf("\n\n Fim das operações");

    return 0;
}






