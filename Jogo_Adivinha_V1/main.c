// ########################################
//  CIC UESC - LP2
//  Aluno: Victor e Reginaldo
//  Data: 24/10/2025
// ##########################################
#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <locale.h>

#include "Prototipos.h"

int main(void)
{
    srand(time(NULL));

    Buraco *HP;
    Perguntas *Questoes;
    char Categoria, resposta, *Parte_1, *Parte_2;
    int Acertos = 0, qntdperguntas;

    LOGO_TIPO();

    printf("Escreva a quantidade de tentativas voce vai ter:");
    scanf(" %d", &qntdperguntas);

    HP = AlocamentoNo(qntdperguntas);

    Questoes = AlocamentoQuestoes(qntdperguntas);

    Contando_Cacos(Parte_1, Parte_2, HP->Vida);

    printf("\nEscolha Categoria: \nFilmes(F) \nSeries(S) \nAleatorio(A)\n");
    scanf(" %c", &Categoria);

    Categoria = ptr_conversao(Categoria);

    escolhendo_categoria(Categoria, Questoes);

    START();

    Contando_Cacos(Parte_1, Parte_2, qntdperguntas);

    int Repeticao = qntdperguntas, v[qntdperguntas];

    for (int i = 0; i < qntdperguntas; i++)
        v[i] = i;

    while (Repeticao)
    {
        int i = rand() % Repeticao;
        int x = v[i];

        printf("\nPergunta: %s\n%s\n%s\n%s", Questoes[x].questoes, Questoes[x].opc[0], Questoes[x].opc[1], Questoes[x].opc[2]);
        printf("\nInsira sua resposta:");
        scanf(" %c", &resposta);

        resposta = ptr_conversao(resposta);

        if (resposta == Questoes[x].respostas)
        {
            printf("Voce acertou!\n");
            Acertos = Acertos + 1;
        }
        else
        {
            printf("Voce errou\n");
            HP->Vida = HP->Vida - (1 & 1);
            Contando_Cacos(Parte_1, Parte_2, HP->Vida);
        }
        v[i] = v[Repeticao - 1];
        Repeticao--;
    }

    Ganhou_Perdeu(HP->Vida, Acertos, qntdperguntas);

    free(Questoes);

    return 0;
}