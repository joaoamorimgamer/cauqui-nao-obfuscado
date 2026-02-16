#include <stdio.h>

int main()
{
    float primeiroNumDiv;
    float segundoNumDiv;
    int primeiroNum;
    int segundoNum;
    int metodo;

    printf("Bem vindo ao cauqui!\n");
    printf("\nprimeiro número? ");
    scanf("%d", &primeiroNum);
    printf("\nsegundo número? ");
    scanf("%d", &segundoNum);
    printf("\n(1: Adição; 2: Subtração; 3: Multiplicação; 4: Divisão)\n");
    printf("Escolha um número: ");
    scanf("%d", &metodo);
    if(metodo == 1)
    {
        printf("o resultado é %d.\n", primeiroNum + segundoNum);
    }
    else if(metodo == 2){
        printf("o resultado é %d.\n", primeiroNum - segundoNum);
    }
    else if(metodo == 3){
        printf("o resultado é %d.\n", primeiroNum * segundoNum);
    }
    else if(metodo == 4){
        printf("o resultado é %.5f e o restante é %d.\n", primeiroNumDiv / segundoNumDiv, primeiroNum % segundoNum);
    }

    return 0;
}
