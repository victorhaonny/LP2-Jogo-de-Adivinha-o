#pragma once
typedef struct
{
    char questoes[100];
    char opc[3][50];
    char respostas;

} Perguntas;

void dificuldade(char a, int *b); // Descartada

void escolhendo_categoria(char a, Perguntas *b);

void Ganhou_Perdeu(int vida, int acertos);

char converso_de_letras(char a);

void LOGO_TIPO(void);

void START(void);

/*
void Filmes(Perguntas *b);
void Series(Perguntas *b);
void aleatorios(Perguntas *b);
*/

// Ponteiros para funcoes

void (*ptr_escolhendo_categoria)(char, Perguntas *);

char (*ptr_conversao)(char);

void (*ptr_Ganhou_Perdeu)(int, int);
