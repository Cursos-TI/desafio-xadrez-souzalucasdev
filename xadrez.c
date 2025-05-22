#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


//Criando uma funcao generica para qualquer movimento de qualquer peca em qualquer direcao (exceto cavalo);
void movimento(int casas,  char *peca, char *direcao){
    if(casas > 0){
        printf("%s movimentou uma casa para %s \n", peca, direcao);
        movimento(casas -1, peca, direcao);
    }
}

void movimentoCavalo(char *direcaoPrincipal, char *direcaoSecundaria){
        int i = 1;

    while(i<=2){
        printf("Cavalo moveu uma casa para %s \n", direcaoPrincipal);
        i++;

        for(i; i>2;){
            printf("Cavalo moveu uma casa para %s \n", direcaoSecundaria);
            break;
        }
    }

}

int main() {

    //Desafio Mestre - Funcao recursiva declarada no inicio do codigo(fora da funcao main())

    //Movendo as peças com a funcao recursiva generica:
    movimento(6, "Torre", "cima");
    movimento(5, "Rainha", "direita");
    movimento(4, "Bispo", "diagonal superior direita");

    //Movendo o Cavalo com loops alinhados
    movimentoCavalo("cima", "direita");



    //**********************   Outros desafios: *********************


    // int bispoDiagonal = 0, rainhaEsquerda = 0, movimentoBaixo = 0;

    //Torre - Movimento linear
    // for(int i=1; i<6; i++){
    //     printf("Torre moveu uma casa para cima \n");
    // }

    //Bispo - Movimento diagonal
    // do {
    //     printf("Bispo moveu uma casa na diagonal superior direita \n");
    //     bispoDiagonal++;
    // } while(bispoDiagonal < 5);
        

    //Rainha - Movimento híbrido
    // while(rainhaEsquerda <= 8){
    //     printf("Rainha moveu uma casa para a esquerda \n");
    //     rainhaEsquerda++;
    // }

    //Cavalo - Movimento em L
    // int i = 1;

    // while(i<=2){
    //     printf("Cavalo moveu uma casa para baixo \n");
    //     i++;

    //     for(i; i>2;){
    //         printf("Cavalo moveu uma casa para a esquerda \n");
    //         break;
    //     }
    // }

    return 0;
}
