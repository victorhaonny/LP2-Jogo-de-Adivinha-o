#pragma once

typedef struct
{
    char questoes[100];
    char opc[3][50];
    char respostas;

} Perguntas;

void dificuldade(char a, int *b);

void escolhendo_categoria(char a, Perguntas *b);

void Ganhou_Perdeu(int vida, int acertos);
