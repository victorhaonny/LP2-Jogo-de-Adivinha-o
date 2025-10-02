//############
//Data:20/09/2025
//Aluno:Victor e Reginaldo
//ideias Aleatorias 
//#######################################
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
    

typedef struct
{
    char questoes[100];
    char opc[3][50];
    char respostas;
} Quest;

void dificuldade(char a, int* b){

    if(a != 'f' && a != 'm' && a != 'd'){
        printf("Dificuldade inserida errada, definindo dificuldade como ""normal");
            *b = 3;
    }
    if (a == 'f')
        *b = 5;
        else if(a == 'm')
            *b = 3;
             else if(a == 'd')
                *b = 1;
}

int main(void){

        srand(time(NULL));

        char* Vetor[3] = {"Com grandes poderes, vem grandes responsabilidades","Seila","Blabla"};

        char vetor[50] = {"Com grandes poderes"};

        printf("\n%s",Vetor[0 + rand() % 3]);
        printf("\n%c",vetor[0 + rand() % 7]);

            return 0;
    }
/*
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
        */
