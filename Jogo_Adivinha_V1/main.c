//############
//Data:20/09/2025
//Aluno:Victor e Reginaldo 
//#######################################
#include <stdio.h>

#include <stdlib.h>

#include <locale.h>//Set local da linguagem

#include <time.h> //Manipulação de Semente

#include <unistd.h>//Manipulação de Tempo no linux

#include <windows.h>//Manipulação de Tempo no Windows

#include "Prototipos.h"    
 
int main(void){

        Perguntas Questoes;
        Perguntas* PonteiroQ = &Questoes;

        setlocale(LC_ALL, "pt_BR.UTF-8");
        srand(time(NULL));
        
        char Letra, Categoria;

        int vida, Acertos = 0;

        int* ptr_v = &vida;

        printf("Escolha a dificuldade: fácil(f)\n medio(m)\n difícil(d)\n");
        scanf("%c", &Letra);
        dificuldade(Letra, ptr_v);

        printf("Escolha Categoria: \nFilmes(F) \nSeries(S) \nAleatorio(A)");
        scanf("%c",&Categoria);

        switch(Categoria){
            case 'F': 
            Perguntas_Categorias(vida, Categoria, PonteiroQ);
            break;
            case 'S':
            Perguntas_Categorias(vida, Categoria, PonteiroQ);
            break;
            case 'A':
            Perguntas_Categorias(vida, Categoria, PonteiroQ); 
            break;
            default:
            printf("Opção não existe, selecionaremos por padrão: Filmes");
            sleep(5000);
            system("clear");
            Perguntas_Categorias(vida, 'F' , PonteiroQ);

        }

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

