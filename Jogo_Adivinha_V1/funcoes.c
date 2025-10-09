#include "Prototipos.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
// Para seleciona dificuldade, em realção a vida

char converso_de_letras(char a)
{

    if (a >= 'a' && a <= 'z')
    {
        return a - 32;
    }
    else
        return a;
}

void dificuldade(char a, int *b)
{

    converso_de_letras(a);

    if (a == 'F' && a == 'M' && a == 'D')
    {
        printf("\nDificuldade inserida errada, definindo dificuldade como "
               "normal");
        *b = 2;
    }

    if (a == 'F')
        *b = 3;
    else if (a == 'M')
        *b = 2;
    else if (a == 'D')
        *b = 1;
}

void escolhendo_categoria(char a, Perguntas *b)
{

    const char *frasesFilmes[3] = {
        "Vou fazer uma oferta que ele nao podera recusar",
        "Com grandes poderes vem grandes responsabilidades",
        "Eu sou a vinganca"};
    const char *opcF[3][3] = {
        {"A) Poderoso Chefao", "B) Lobo de Wall Street", "C) A Grande Aposta"},
        {"A) Homem de Ferro", "B) Homem Aranha", "C) Homem invisivel"},
        {"A) V de Vinganca", "B) Game of Thrones", "C) Batman"},
    };
    const char respostaF[3] = {'A', 'B', 'C'};

    const char *frasesSeries[3] = {
        "Eu não estou em perigo, eu sou o perigo",
        "Voce falhou com essa cidade",
        "Eu faco minha propria sorte"};

    const char *opcS[3][3] = {
        {"A) Breaking Bad", "B) Peaky Blinders", "C) vikings"},
        {"A) Flash", "B) Arrow", "C) Titans"},
        {"A) La Casa de Papel", "B) Squid Game", "C) Suits"},
    };

    const char respostaS[3] = {'A', 'B', 'C'};

    const char *frasesAleatorio[3] = {
        "Voce esquece de varias coisas todos os dias, pode esquece dessa tambem",
        "Qual foi o Ano da independencia do Brazil",
        "Qual desses e radiativo"};

    const char *opcA[3][3] = {
        {"A) Halo", "B) assassin's creed ", "C) GTA 5"},
        {"A) 1989", "B) 1822", "C) 1914"},
        {"A) Tântalo", "B) Rênio", "C) Uranio"},
    };

    const char respostaA[3] = {'C', 'B', 'C'};

    if (a == 'f' || a == 'F')
    {
        for (int i = 0; i < 3; i++)
        {
            strcpy(b[i].questoes, frasesFilmes[i]);
            strcpy(b[i].opc[0], opcF[i][0]);
            strcpy(b[i].opc[1], opcF[i][1]);
            strcpy(b[i].opc[2], opcF[i][2]);
            b[i].respostas = respostaF[i];
        }
    }

    if (a == 's' || a == 'S')
    {
        for (int i = 0; i < 3; i++)
        {
            strcpy(b[i].questoes, frasesSeries[i]);
            strcpy(b[i].opc[0], opcS[i][0]);
            strcpy(b[i].opc[1], opcS[i][1]);
            strcpy(b[i].opc[2], opcS[i][2]);
            b[i].respostas = respostaS[i];
        }
    }

    if (a == 'a' || a == 'A')
    {
        for (int i = 0; i < 3; i++)
        {
            strcpy(b[i].questoes, frasesAleatorio[i]);
            strcpy(b[i].opc[0], opcA[i][0]);
            strcpy(b[i].opc[1], opcA[i][1]);
            strcpy(b[i].opc[2], opcA[i][2]);
            b[i].respostas = respostaA[i];
        }
    }
}

void Ganhou_Perdeu(int vida, int acertos)
{
    if (vida == 0)
        printf("GAME OVER");
    else if (acertos == 3)
        printf("YOU WIN");
    else
    {
        printf("A sua pontuacao maxima foi de: %d", acertos);
    }
}
