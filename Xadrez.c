#include <stdio.h>

int main()
{
   //movimento da torre
   printf("Torre move:\n");             //Anuncia o início do movimento da torre. Não faz parte do loop
   for(int torre= 1; torre<=5;torre++){//cinco movimentos faz o loop 5 vezes na variável torre
   printf("direita\n");               //imprime o movimento da torre em cada loop
   }
   
   //movimento do bispo
   printf("\nBispo move:\n");   //Anuncia o início do movimento do bispo
   int bispo=1;
   while(bispo<=5){           //condição determina o número de 5 movimentos
    printf("cima,direita\n");//imprime o movimento do bispo
    bispo++;                //incrementa a variável bispo fazendo o loop até a condição while
    }
    
    //movimento da *rainha*
    printf("\nRainha move:\n");//Anuncia o movimento da rainha
    int rainha = 1;
    do{
        printf("direita\n");//imprime o movimento da rainha
        rainha++;          //Faz o incremento da variável rainha para garantir a condição while
        
    }while(rainha<=8);    //condição determina 8 movimentos da rainha

    return 0;
}
