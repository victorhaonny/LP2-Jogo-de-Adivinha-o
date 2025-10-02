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
    char* questoes[100];
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

        setlocale(LC_ALL, "pt_BR.UTF-8");
    
        srand(time(NULL));
        char a;
        int vida;
        int* ptr_v = &vida;

        printf("Escolha a dificuldade: (f para fácil)\n (m para medio)\n (d para difícil)\n");
            scanf("%c", &a);
                dificuldade(a, ptr_v);

        return 0;
    }
       /* char* Vetor[3] = {"Com grandes poderes, vem grandes responsabilidades","Seila","Blabla"};

        char vetor[50] = {"Com grandes poderes"};

        printf("\n%s",Vetor[0 + rand() % 3]);
        printf("\n%c",vetor[0 + rand() % 7]);

            return 0;
    }

        switch(*b){
            case 'f': 
                *b = 5;
            break;
            case 'n':
                *b = 3;
            break;
            case 'd':
                *b = 1;
                
            break;
            default:
            printf("Esss Nivel não existe... \n Definindo como Normal");
                *b = 3;
            return main();
        }

        return 0;
    }
        */
