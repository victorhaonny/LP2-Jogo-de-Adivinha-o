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

    Perguntas *Questoes;

    char Categoria, resposta, *Parte_1, *Parte_2;

    int qntdperguntas, Acertos = 0;

    int *PT_Acertos = &Acertos;

    LOGO_TIPO();

    printf("Escreva a quantidade de tentativas voce vai ter:");
    scanf(" %d", &qntdperguntas);

    int Vida = qntdperguntas;

    int *PT_Vida = &Vida;

    Questoes = AlocamentoQuestoes(qntdperguntas);

    printf("\nEscolha Categoria: \nFilmes(F) \nSeries(S) \nAleatorio(A)\n");
    scanf(" %c", &Categoria);

    Categoria = ptr_conversao(Categoria);

    escolhendo_categoria(Categoria, Questoes);

    START();

    Dropando_Questao(qntdperguntas, Questoes, Parte_1, Parte_2, PT_Vida, PT_Acertos);

    Ganhou_Perdeu(Vida, Acertos, qntdperguntas);

    free(Questoes);

    return 0;
}

typedef struct
{
    int Pontos;
    struct Tabela *proximo;

} Tabela;

Tabela *Alocamento_No(int Acertos, int Quantidade)
{
    Tabela *Novo = malloc(sizeof(Tabela));

    if (Novo == NULL)
    {
        printf("Erro no Alocamento Tabela");
        exit(1);
    }

    for (int i = 0; i < Quantidade; i++)
        Novo[i].Pontos = Acertos;
    Novo->proximo = NULL;
    return Novo;
}
