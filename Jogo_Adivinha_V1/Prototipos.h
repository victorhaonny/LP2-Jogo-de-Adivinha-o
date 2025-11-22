#pragma once
typedef struct
{
    char questoes[100];
    char opc[3][50];
    char respostas;

} Perguntas;

void escolhendo_categoria(char a, Perguntas *b);

void Ganhou_Perdeu(int vida, int acertos);

char converso_de_letras(char a);

void LOGO_TIPO(void);

void Contando_Cacos(char *HP, char *HP_2, int vida);

void START(void);

void liberando_vida(char *hp, char *hp_2, Perguntas *Questoes);

void (*ptr_escolhendo_categoria)(char, Perguntas *);

char (*ptr_conversao)(char);

void (*ptr_Ganhou_Perdeu)(int, int);
