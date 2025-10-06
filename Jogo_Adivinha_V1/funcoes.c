#include "Prototipos.h"
#include <stdlib.h>
#include <stdio.h>

// Para seleciona dificuldade, em realção a vida
void dificuldade(char a, int *b)
{

    if (a != 'f' && a != 'm' && a != 'd')
    {
        printf("\nDificuldade inserida errada, definindo dificuldade como "
               "normal");
        *b = 2;
    }

    if (a == 'f')
        *b = 4;
    else if (a == 'm')
        *b = 2;
    else if (a == 'd')
        *b = 1;
}
// Seleciona Categoria de Perguntas

void Selecionando_Categorias(char a, Perguntas *p)
{
    if (a == 'A' || a == 'F' || a == 'S')
        Perguntas_Categorias(a, p);
    else
    {
        printf("O Padrão vai ser filmes");
        Perguntas_Categorias('F', p);
    }
}

// Função para passa as perguntas Certas na Struct do jeito que o usuario pediu.

Perguntas Perguntas_Categorias(char a, Perguntas *b)
{
    if (a == 'F')
    {
        Perguntas Filmes[3] = {
            {"Frase 1", {"A1", "B1", "C1"}, 'A'},
            {"Frase 2", {"A2", "B2", "C2"}, 'B'},
            {"Frase 3", {"A3", "B3", "C3"}, 'C'}};
    }
    else if (a == 'S')
    {

        Perguntas Series[3] = {
            {"Frase 1", {"A1", "B1", "C1"}, 'A'},
            {"Frase 2", {"A2", "B2", "C2"}, 'B'},
            {"Frase 3", {"A3", "B3", "C3"}, 'C'}};
    }
    else if (a == 'A')
    {
        Perguntas Aleatorio[3] = {
            {"Frase 1", {"A1", "B1", "C1"}, 'A'},
            {"Frase 2", {"A2", "B2", "C2"}, 'B'},
            {"Frase 3", {"A3", "B3", "C3"}, 'C'}};
    }
}

// Função para mostra na tela as perguntas

void Mostrando_Perguntas_Tela(int a, int b, Perguntas d)
{
    char Resposta;

    for (int i = 0; i < a; i++)
    {
        printf("Pergunta: %s", d.questoes[i]);
        printf("\n%s", d.opc[i]);
    }

    printf("\nResposta: ");
    scanf("%c", Resposta);

    if (Resposta != d.respostas)
    {
        printf("\n Errado");
        a -= 1;
    }
    else
    {
        printf("\nCorreto");
        b++;
    }
}

void Ganhou_Perdeu(int vida, int acertos)
{

    if (vida == 0)
        printf("GAME OVER");
    else if (acertos = 4)
        printf("VENCEU");
}