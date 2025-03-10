#include <stdio.h>

int main()
{
   //movimento da torre
   printf("Torre move:\n");             //Imprime o enunciado do início do movimento da torre
   for(int torre= 1; torre<=5;torre++){//Condição lê 5 vezes a instrução de for
   printf("direita\n");               //imprime o movimento da torre em cada loop
   }
   
   //movimento do bispo
   printf("\nBispo move:\n");   //Imprime o enunciado do início do movimento do bispo
   int bispo=1;
   while(bispo<=5){           //condição determina o número de 5 movimentos
    printf("cima,direita\n");//imprime o movimento do bispo
    bispo++;                //incrementa a variável bispo fazendo o loop até a condição while
    }
    
    //movimento da *rainha*
    printf("\nRainha move:\n");//Imprime o enunciado do início do movimento da rainha
    int rainha = 1;
    do{
    printf("direita\n");    //imprime o movimento da rainha
    rainha++;              //Faz o incremento da variável rainha para garantir a condição while
    }while(rainha<=8);    //condição determina 8 movimentos da rainha
    
    //movimento do cavalo
    printf("\nCavalo move:\n");            //Imprime o enunciado do início do movimento do cavalo
    for(int cavalo = 0;cavalo<1;cavalo++){//condição para executar uma vez, e printar o movimento final do cavalo
    do{ 
    printf("Baixo\n");                  //imprime os movimentos iniciais do cavalo para baixo
    cavalo++;                          //Aproveita a mesma variável "cavalo" para fazer 1 loop do/while
    }while(cavalo<=1);                //condição determina 2 movimentos em do/while
    printf("esquerda\n");            //imprime o movimento final do cavalo dentro de "for"
        
    }
    

    return 0;
}