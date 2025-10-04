//############
//Data:20/09/2025
//Aluno:Victor e Reginaldo 
//#######################################
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "Prototipos.h"    

typedef struct
{
    char* questoes[100];
    char opc[3][50];
    char respostas;

} Perguntas;

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

        setlocale(LC_ALL, "pt_BR.UTF-8");
        srand(time(NULL));
        
        char Letra, Categoria;
        
        int vida;

        int* ptr_v = &vida;

        printf("Escolha Categoria: \nFilmes(F) \nSeries(S) \nAleatorio(A)");
        scanf("%c",Categoria);

        switch(Categoria){
            case 'F': 
            break;

            case 'S':
            break;

            case 'A': 
            break;

            default:
        }


        printf("Escolha a dificuldade: fácil(f)\n medio(m)\n difícil(d)\n");
        scanf("%c", &Letra);

        dificuldade(Letra, ptr_v);


        return 0;
    }


        char* Vetor[3] = {"Com grandes poderes, vem grandes responsabilidades","Seila","Blabla"};

        char vetor[50] = {"Com grandes poderes"};
/*
        printf("\n%s",Vetor[0 + rand() % 3]);
        printf("\n%c",vetor[0 + rand() % 7]);

            return 0;
    }
*/

