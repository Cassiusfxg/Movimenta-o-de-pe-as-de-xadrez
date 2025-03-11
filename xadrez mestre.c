#include <stdio.h>

void direita(int n){    //função recursiva de movimento para direita
    if(n>0){
    printf("direita\n");
    direita (n-1); 
    }
}

void cima(int n){      //função recursiva de movimento para cima
    if(n>0){
    printf("cima");//sem \n para formatação correta do printf posteriormente, tanto no uso do cavalo como do bispo 
    cima (n-1); 
    }
}

int main()
{
    //movimento da torre
    printf("Torre move:\n"); //Imprime o enunciado do início do movimento da torre
    direita(5);             
     
    //movimento do bispo (exercício pede com loops alinhados e função recursiva)
    printf("\nBispo move:\n");            //Imprime o enunciado do início do movimento do bispo
    for(int move=1;move<=5;move++){      //loop alinhado "for externo" chama a função de movimento recursiva cima 5 vezes
        cima(1);                        
        for(int move=1;move<=1;move++){ //loop alinhado "for interno" chama a função de movimento recursiva direita 1 vez
        printf(",");                   //acrescenta a vígula entre os movimentos para exibir corretamente os mesmos
        direita(1);
        }
    }
    
    //movimento da *rainha*
    printf("\nRainha move:\n");//Imprime o enunciado do início do movimento da rainha
    direita(8);
   
    
    //movimento do cavalo (O exercício pede duas casas pra cima e uma para direita)
    printf("\nCavalo move:\n");            //Imprime o enunciado do início do movimento do cavalo
    for(int move=1;move<=2;move++){       //uso do for para formatação correta no movimento recursivo "cima" do cavalo
    cima(1);
    printf("\n");
    }
    direita(1);
    

    return 0;
}
