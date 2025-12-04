// ########################################
//  CIC UESC - LP2
//  Aluno: Victor e Reginaldo
//  Data: 24/10/2025
// ##########################################
#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <time.h>

#include "Prototipos.h"

int main(void)
{

    Perguntas *Questoes;

    char Categoria;

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

    Dropando_Questao(qntdperguntas, Questoes, PT_Vida, PT_Acertos);

    Ganhou_Perdeu(Vida, Acertos, qntdperguntas);

    printf("\n");

    // A Depender da categoria escolhida, dropa o gabarito de diferentes categorias

    if (Categoria == 'A' || Categoria == 'a')
    {
        FILE *f = fopen("gabaritoA.txt", "r");
        int c;

        while ((c = fgetc(f)) != EOF)
        {
            putchar(c);
        }

        fclose(f);
    }
    else if (Categoria == 'S' || Categoria == 's')
    {
        FILE *D = fopen("gabaritoS.txt", "r");
        int x;

        while ((x = fgetc(D)) != EOF)
        {
            putchar(x);
        }

        fclose(D);
    }
    else
    {
        FILE *H = fopen("gabaritoF.txt", "r");
        int b;

        while ((b = fgetc(H)) != EOF)
        {
            putchar(b);
        }
        fclose(H);
    }

    free(Questoes);

    // Executa a função e imprime a tabela dos jogadores com seus acertos e em qual categoria ele jogou
    Tabela_Jogadores(Acertos, Categoria);

    return 0;
}
