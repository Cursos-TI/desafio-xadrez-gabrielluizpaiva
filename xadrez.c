#include <stdio.h>

int main(){

    //movimento da torre

    printf("torre se move 5 vezes para a direita.\n");

    for(int torre = 0 ; torre < 5; torre++){
        printf("direita \n");
    };

    printf("\n"); //separacao de blocos

    //movimento do bispo

    printf("movimento do bispo (5 casas na diagonal superior direita),\n");
    
    int movimentobispo = 0;
    while(movimentobispo < 5 ){
        printf("cima direita\n");
        movimentobispo++;
    };

    printf("\n"); //separacao de blocos

    //movimento rainha

    int movimentorainha = 0;

    printf("movimento rainha 8 vezes para esquerda.\n");

    do {
        printf("esquerda \n");
        movimentorainha++;

    } while (movimentorainha < 8);

    //movimento cavalo

    int movimentocavalo = 0;

    while(movimentocavalo < 2){
        for(movimentocavalo = 0; movimentocavalo < 1; movimentocavalo++){
            printf("\n");
            printf("movimento cavalo: 2 para cima e 1 para direita.\n");
            printf("cima \n");
            printf("cima \n");
            printf("direita \n");
           }
        
        movimentocavalo++;
    };
        
    return 0;
}

   

