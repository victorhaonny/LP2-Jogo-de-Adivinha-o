// ########################################
//  CIC UESC - LP2
//  Aluno: Victor e Reginaldo
//  Data: 09/10/2025
// ##########################################
#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include "Prototipos.h"

int main(void)
{
    char Categoria, resposta;

    int Acertos = 0;

    int qntdperguntas;

    LOGO_TIPO();

    printf("Escreva a quantidade de tentativas voce vai ter:");
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

    void (*carregar_categoria)(Perguntas *);

    escolhendo_categoria(Categoria, PonteiroQ);

    getchar();

    START();

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