#include "Prototipos.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// Para seleciona dificuldade, em realção a vida
void dificuldade(char a, int *b)
{

    if (a != 'f' && a != 'm' && a != 'd')
    {
        printf("\nDificuldade inserida errada, definindo dificuldade como "
               "normal");
        *b = 2;
    }

    if (a == 'f')
        *b = 4;
    else if (a == 'm')
        *b = 2;
    else if (a == 'd')
        *b = 1;
}

// Função para passa as perguntas Certas na Struct do jeito que o usuario pediu.

void escolhendo_categoria(char a, Perguntas *b)
{

    // Vetor contendo as frases, o ponteiro é para cada frase ser um espaço, ao invés de cada letra ser um espaço
    const char *frasesFilmes[3] = {
        "Testando 1F",
        "Testando 2F",
        "Testando 3F"};
    // Matriz para as respostas, a primeira caixa é para as questoes 1,2 e 3, e as segundas para cada alternativa
    const char *opcF[3][3] = {
        {"A) Certo", "B) Errado", "C) Errado"},
        {"A) Errado", "B) Certo", "C) Errado"},
        {"A) Errado", "B) Errado", "C) Certo"},
    };
    // Vetor contendo as respostas certas de cada frase
    const char respostaF[3] = {'A', 'B', 'C'};

    const char *frasesSeries[3] = {
        "Testando 1S",
        "Testando 2S",
        "Testando 3S"};

    const char *opcS[3][3] = {
        {"A) Certo", "B) Errado", "C) Errado"},
        {"A) Errado", "B) Certo", "C) Errado"},
        {"A) Errado", "B) Errado", "C) Certo"},
    };

    const char respostaS[3] = {'A', 'B', 'C'};

    const char *frasesAleatorio[3] = {
        "Testando 1A",
        "Testando 2A",
        "Testando 3A"};

    const char *opcA[3][3] = {
        {"A) Certo", "B) Errado", "C) Errado"},
        {"A) Errado", "B) Certo", "C) Errado"},
        {"A) Errado", "B) Errado", "C) Certo"},
    };

    const char respostaA[3] = {'A', 'B', 'C'};

    // atribuir a frase original à uma outra variavel, "b[i].op/perguntas" é onde ele deve ir, e o que vem em seguida de onde ele veio
    if (a == 'f' || a == 'F')
    {
        for (int i = 0; i < 3; i++)
        {
            strcpy(b[i].questoes, frasesFilmes[i]);
            strcpy(b[i].opc[0], opcF[i][0]);
            strcpy(b[i].opc[1], opcF[i][1]);
            strcpy(b[i].opc[2], opcF[i][2]);
            b[i].respostas = respostaF[i]; // atribui o que está no vetor de respostas ao vetor que vai receber a resposta do usuario.
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

/*
void Mostrando_Perguntas_Tela(int a, int b, Perguntas d[])
{
    char Resposta;

    for (int i = 0; i < a; i++)
    {
        printf("Pergunta: %s\n", d[i].questoes);

        for (int j = 0; j < a; j++)
        {
            printf("\n%s", d[i].opc[j]);
        }
        printf("\nResposta: ");
        scanf("%c", &Resposta);

        if (Resposta != d[i].respostas)
        {
            printf("\n Errado");
            a -= 1;
        }
        else
        {
            printf("\nCorreto");
            b++;
        }
    }
}
*/
void Ganhou_Perdeu(int vida, int acertos)
{

    if (vida == 0)
        printf("GAME OVER");
    else if (acertos == vida)
        printf("YOU WIN");
}

/*

 if (a == 'F')
            return Filmes;
        if (a == 'S')
            return Series;
        else if (a == 'A')
            return Aleatorio;

    return Filmes;
    }


*/
