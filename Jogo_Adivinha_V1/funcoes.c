#include "Prototipos.h"
#include <stdlib.h>
#include <stdio.h>

void dificuldade(char a, int *b)
{

    if (a != 'f' && a != 'm' && a != 'd')
    {
        printf("\nDificuldade inserida errada, definindo dificuldade como "
               "normal");
        *b = 2;
        sleep(5000);
        system("clear");
    }

    if (a == 'f')
        *b = 4;
    else if (a == 'm')
        *b = 2;
    else if (a == 'd')
        *b = 1;
}

void Selecionando_Categorias(char a, Perguntas *p)
{

    if (a == 'A' || a == 'F' || a == 'S')
        Perguntas_Categorias(a, p);
    else
    {
        printf("\nErro na escolhar, Filmes sera indicado como padrão");
        sleep(5000);
        system("clear");
        Perguntas_Categorias('F', p);
    }
}

Perguntas Perguntas_Categorias(char a, Perguntas *b)
{
    if (a == 'f')
    {
        *b = (Perguntas){"Com Grandes poderes vem grandes responsabilidades: ", {"A) Homem de Ferro", "B) Homem-Aranha", "C) Homem invisivel"}, 'B'};
        return *b;
    }
}

void Mostrando_Perguntas_Tela(int a, int b, Perguntas *d)
{

    printf("Pergunta: %s", d->questoes);

    for (int i = 0; i <= 3; i++)
    {
        printf("\n%s", d->opc[i]);
    }
}
