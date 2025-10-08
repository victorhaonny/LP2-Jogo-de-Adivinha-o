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

    Perguntas Questoes[3];

    Perguntas *PonteiroQ = Questoes;

    char Letra, Categoria, resposta;

    int vida, Acertos = 0;

    int *ptr_v = &vida;

    printf("Escolha a dificuldade:\nfacil(f)\nmedio(m)\ndificil(d)\n");
    scanf("%c", &Letra);
    getchar();
    dificuldade(Letra, ptr_v);

    printf("Escolha Categoria: \nFilmes(F) \nSeries(S) \nAleatorio(A)");
    scanf("%c", &Categoria);
    getchar();

    escolhendo_categoria(Categoria, PonteiroQ);

    getchar();

    printf("\n#####JOGO#####");

    for (int i = 0; i < 3; i++)
    {
        printf("\nPergunta %d: %s\n%s\n%s\n%s", i + 1, Questoes[i].questoes, Questoes[i].opc[0], Questoes[i].opc[1], Questoes[i].opc[2]);
        printf("\nInsira sua resposta:");
        scanf(" %c", &resposta);

        if (resposta == Questoes[i].respostas)
        {
            printf("Voce acertou!\n");
        }
        else
            printf("Voce errou :(\n");
    }

    Ganhou_Perdeu(vida, Acertos);

    return 0;
}