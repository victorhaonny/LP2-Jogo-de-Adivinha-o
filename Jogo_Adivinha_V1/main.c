//############
//Data:18/09/2025
//Aluno:Victor 
//###########
#include <stdio.h>
#include <stdlib.h>
#include "Prototipos.h"
    
    int main(void){

        int Escolhar;

        printf("Escolhar Nivel: ");
        scanf("%d",&Escolhar);

        switch(Escolhar){
            case 1: 
                calculo_vida(Escolhar);
            break;
            case 2: 
                calculo_vida(Escolhar);
            break;
            case 3: //1
                calculo_vida(Escolhar);
            break;
            default:
            printf("Esss Nivel não existe");
            return main();
        }

        return 0;
    }