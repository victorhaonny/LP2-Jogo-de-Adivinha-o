#pragma once

typedef struct
{
    char *questoes[100];
    char opc[3][50];
    char respostas;

} Perguntas;

void dificuldade(char a, int *b);
void Perguntas_Categorias(char a, Perguntas *b);
void Selecionando_Categorias(char a, Perguntas *b);
void Mostrando_Perguntas_Tela(int a, int b, Perguntas d);