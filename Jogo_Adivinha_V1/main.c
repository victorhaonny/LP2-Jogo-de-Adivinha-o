//############
//Data:18/09/2025
//Aluno:Victor 
//###########
#include <stdio.h>
#include <stdlib.h>
//O main vai se a base, ele vai utilizar ou um if else ou um switch case para controla o menu
    int main(void){

        int Escolhar;

        printf("Escolhar Nivel: ");
        scanf("%d",&Escolhar);

        switch(Escolhar){
            case 1:
            break;
            case 2:
            break;
            case 3:
            break;
            default:
            printf("Esss Nivel não existe");
            return main();
        }

        return 0;
    }