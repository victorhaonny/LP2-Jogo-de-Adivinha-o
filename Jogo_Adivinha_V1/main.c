// ########################################
//  CIC UESC - LP2
//  Aluno: Victor e Reginaldo
//  Data: 09/10/2025
// ########################################
#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include "Prototipos.h"

int main(void)
{

    printf("   __                          _          _       _ _       _       _           \n");
    printf("   \\ \\  ___   __ _  ___     __| | ___    /_\\   __| (_)_   _(_)_ __ | |__   __ _ \n");
    printf("    \\ \\/ _ \\ / _` |/ _ \\   / _` |/ _ \\  //_\\\\ / _` | \\ \\ / / | '_ \\| '_ \\ / _` |\n");
    printf(" /\\_/ / (_) | (_| | (_) | | (_| |  __/ /  _  \\ (_| | |\\ V /| | | | | | | | (_| |\n");
    printf(" \\___/ \\___/ \\__, |\\___/   \\__,_|\\___| \\_/ \\_/\\__,_|_| \\_/ |_|_| |_|_| |_|\\__,_|\n");
    printf("             |___/                                                              \n");

    /*Perguntas *Questoes[3];*/

    /*Perguntas *PonteiroQ = Questoes;*/

    char /*Letra,*/ Categoria, resposta;

    int Acertos = 0;

    /*int *ptr_v = &vida;*/

    int qntdperguntas;

    /*printf("\nEscolha a dificuldade:\nFacil(F)\nMedio(M)\nDificil(D)\n");
    scanf("%c", &Letra);
    getchar();
    Letra = converso_de_letras(Letra);

    dificuldade(Letra, ptr_v);*/

    printf("Escreva a quantidade de tentativas você vai ter:");
    scanf("%d", &qntdperguntas);

    int vida = qntdperguntas;

    getchar();

    Perguntas *Questoes = malloc(qntdperguntas * sizeof(Perguntas));

    if (Questoes == NULL)
    {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    Perguntas *PonteiroQ = Questoes;

    printf("\nEscolha Categoria: \nFilmes(F) \nSeries(S) \nAleatorio(A)");
    scanf("%c", &Categoria);

    Categoria = converso_de_letras(Categoria);

    escolhendo_categoria(Categoria, PonteiroQ);

    getchar();

    printf(" _____                                     \n");
    printf("/ ____|                                    \n");
    printf("| |     ___  _ __ ___   ___  ___ ___  _   _ \n");
    printf("| |    / _ \\| '_ ` _ \\ / _ \\/ __/ _ \\| | | |\n");
    printf("| |___| (_) | | | | | |  __/ (_| (_) | |_| |\n");
    printf("\\_____\\___/|_| |_| |_|\\___|\\___\\___/ \\__,_|\n\n");

    srand(time(NULL));

    int Repeticao = qntdperguntas;
    int v[qntdperguntas];

    for (int i = 0; i < qntdperguntas; i++)
    {
        v[i] = i;
    }

    while (Repeticao)
    {
        int i = rand() % Repeticao;
        int x = v[i];

        printf("\nPergunta: %s\n%s\n%s\n%s", Questoes[x].questoes, Questoes[x].opc[0], Questoes[x].opc[1], Questoes[x].opc[2]);
        printf("\nInsira sua resposta:");
        scanf(" %c", &resposta);

        resposta = converso_de_letras(resposta);

        if (resposta == Questoes[x].respostas)
        {
            printf("Voce acertou!\n");
            Acertos = Acertos + 1;
        }
        else
        {
            printf("Voce errou :\n");
            vida--;
        }
        v[i] = v[Repeticao - 1];
        Repeticao--;
        printf("Acertos: %d\n", Acertos);
        printf("Vidas: %d\n", vida);
    }

    Ganhou_Perdeu(vida, Acertos);

    free(Questoes);

    return 0;
}