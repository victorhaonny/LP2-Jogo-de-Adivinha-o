#pragma once
typedef struct
{
    char questoes[100];
    char opc[3][50];
    char respostas;

} Perguntas;

void escolhendo_categoria(char a, Perguntas *b);

void Ganhou_Perdeu(int vida, int acertos, int Q_Perguntas);

char converso_de_letras(char a);

void LOGO_TIPO(void);

void Contando_Cacos(char *HP, char *HP_2, int *vida);

void START(void);

void Dropando_Questao(int Quantidade_Perguntas, Perguntas *Questoes, char *Part_1, char *Part_2, int *Vida, int *Acertos);

char (*ptr_conversao)(char);

Perguntas *AlocamentoQuestoes(int Quantidade);
