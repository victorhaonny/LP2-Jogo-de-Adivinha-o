#pragma once

typedef struct
{
    char* questoes[100];
    char opc[3][50];
    char respostas;

} Perguntas;


void dificuldade(char a, int* b);
void Perguntas_Categorias(int a, char b);