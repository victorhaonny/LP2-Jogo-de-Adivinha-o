#pragma once

typedef struct
{
    char* questoes[100];
    char opc[3][50];
    char respostas;

} Perguntas;


void dificuldade(char a, int* b);
Perguntas Perguntas_Categorias(int a, char b, Perguntas *d);