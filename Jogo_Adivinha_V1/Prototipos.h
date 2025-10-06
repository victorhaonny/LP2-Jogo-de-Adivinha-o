#pragma once

typedef struct
{
    char *questoes[100];
    char opc[50][50];
    char respostas;

} Perguntas;

void dificuldade(char a, int *b);

Perguntas Perguntas_Categorias(char a);

void Selecionando_Categorias(char a, Perguntas *b);

void Mostrando_Perguntas_Tela(int a, int b, Perguntas d[]);

void Ganhou_Perdeu(int vida, int acertos);