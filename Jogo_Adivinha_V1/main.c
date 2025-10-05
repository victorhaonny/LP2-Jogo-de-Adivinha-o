// ############
// Aluno:Victor e Reginaldo
// #######################################
#include <stdio.h>

#include <stdlib.h>

#include <locale.h> //Set local da linguagem

#include <time.h> //Manipulação de Semente

#include <unistd.h> //Manipulação de Tempo no linux

#include <windows.h> //Manipulação de Tempo no Windows

#include "Prototipos.h"

int main(void)
{

    setlocale(LC_ALL, "pt_BR.UTF-8");
    srand(time(NULL));

    Perguntas Questoes;
    Perguntas *PonteiroQ = &Questoes;

    setlocale(LC_ALL, "pt_BR.UTF-8");
    srand(time(NULL));

    char Letra, Categoria, Start;

    int vida, Acertos = 0;

    int *ptr_v = &vida;

    printf("Escolha a dificuldade: fácil(f)\n medio(m)\n difícil(d)\n");
    scanf("%c", &Letra);
    dificuldade(Letra, ptr_v);

    printf("Escolha Categoria: \nFilmes(F) \nSeries(S) \nAleatorio(A)");
    scanf("%c", &Categoria);
    Selecionando_Categorias(Categoria, PonteiroQ);

    printf("Está pronto para comeaça ?");
    scanf("%c", &Start);
    if (Start = 'S')
    {
        Mostrando_Perguntas_Tela(vida, Acertos, Questoes);
    }

    return 0;
}

/*
        char* Vetor[3] = {"Com grandes poderes, vem grandes responsabilidades","Seila","Blabla"};

        char vetor[50] = {"Com grandes poderes"};

        printf("\n%s",Vetor[0 + rand() % 3]);
        printf("\n%c",vetor[0 + rand() % 7]);

            return 0;
    }
*/
