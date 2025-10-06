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

void Selecionando_Categorias(char a, Perguntas *b)
{
    if (a == 'A' || a == 'F' || a == 'S')
        *b = Perguntas_Categorias(a);
    else
    {
        printf("O Padrão vai ser filmes");
        *b = Perguntas_Categorias('F');
    }
}

// Função para passa as perguntas Certas na Struct do jeito que o usuario pediu.

Perguntas Perguntas_Categorias(char a)
{
    if (a == 'F')
    {
        Perguntas Filmes[3] = {
            {"Frase 1", {"A", "A", "A"}, 'A'},
            {"Frase 2", {"B", "B", "B"}, 'B'},
            {"Frase 3", {"C", "C", "C"}, 'C'}};
        return Filmes[3];
    }
    else if (a == 'S')
    {
        Perguntas Series[3] = {
            {"Frase 1", {"A", "B", "C"}, 'A'},
            {"Frase 2", {"A", "B", "C"}, 'B'},
            {"Frase 3", {"A", "B", "C"}, 'C'}};
        return Series[3];
    }
    else if (a == 'A')
    {
        Perguntas Aleatorio[3] = {
            {"Frase 1", {"A", "B", "C"}, 'A'},
            {"Frase 2", {"A", "B", "C"}, 'B'},
            {"Frase 3", {"A", "B", "C"}, 'C'}};
        return Aleatorio[3];
    }
}

// Função para mostra na tela as perguntas

void Mostrando_Perguntas_Tela(int a, int b, Perguntas d[])
{
    char Resposta;

    for (int i = 0; i < a; i++)
    {
        printf("Pergunta: %s", d[i].questoes);

        for (int j = 0; j < a; j++)
        {
            printf("\n%s", d[j].opc);
        }
        printf("\nResposta: ");
        scanf("%c", d[i].respostas);

        if (Resposta != d[i].respostas)
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
}

void Ganhou_Perdeu(int vida, int acertos)
{

    if (vida == 0)
        printf("GAME OVER");
    else if (acertos = vida)
        printf("YOU WIN");
}