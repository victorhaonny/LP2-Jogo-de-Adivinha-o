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
        Perguntas_Categorias('F', p);
}

// Função para passa as perguntas Certas na Struct do jeito que o usuario pediu.

void Perguntas_Categorias(char a, Perguntas *b)
{
    if (a == 'f')
    {
        b->questoes[0] = "Com grandes poderes vem grandes responsabilidades";
        b->opc[0][50] = "A) Homem-Aranha";
        b->opc[1][50] = "B) Batman";
        b->opc[2][50] = "C) Superman";
        b->respostas = 'A';
    }
}

// Função para mostra na tela as perguntas

void Mostrando_Perguntas_Tela(int a, int b, Perguntas d)
{
    char Reposta;

    for (int i = 0; i < a; i++)
    {
        printf("Pergunta: %s", d.questoes[i]);
        printf("\n%s", d.opc[i]);
    }

    printf("\nResposta: ");
    scanf("%c", Reposta);

    if (Reposta != d.respostas)
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