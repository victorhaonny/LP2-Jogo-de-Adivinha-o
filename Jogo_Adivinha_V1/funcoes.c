#include "Prototipos.h"
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void escolhendo_categoria(char a, Perguntas *b)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    const char *frasesFilmes[5] = {
        "Vou fazer uma oferta que ele nao podera recusar",
        "Com grandes poderes vem grandes responsabilidades",
        "Eu sou a vinganca",
        "Ao infinito e alem",
        "Meu precioso..."};
    const char *opcF[5][5] = {
        {"A) Poderoso Chefao", "B) Lobo de Wall Street", "C) A Grande Aposta"},
        {"A) Homem de Ferro", "B) Homem Aranha", "C) Homem invisivel"},
        {"A) V de Vinganca", "B) Game of Thrones", "C) Batman"},
        {"A) Toy Story", "B) Divertida Mente", "C) Monstros S.A."},
        {"A) As Cronicas de Narnia", "B) Senhor dos Aneis", "C) A Roda do Tempo"}};
    const char respostaF[5] = {'A', 'B', 'C', 'A', 'B'};

    const char *frasesSeries[5] = {
        "Eu nao estou em perigo, eu sou o perigo",
        "Voce falhou com essa cidade",
        "Eu faco minha propria sorte",
        "Eu sou o perigo",
        "Nao morra antes de ver o que vem depois."};

    const char *opcS[5][5] = {
        {"A) Breaking Bad", "B) Peaky Blinders", "C) vikings"},
        {"A) Flash", "B) Arrow", "C) Titans"},
        {"A) La Casa de Papel", "B) Squid Game", "C) Suits"},
        {"A) Breaking Bad", "B) Batman", "C) Arrow"},
        {"A) Peaky Blinders", "B) Love Death And Robots", "C) The Flash"}};

    const char respostaS[5] = {'A', 'B', 'C', 'A', 'A'};

    const char *frasesAleatorio[3] = {
        "Voce esquece de varias coisas todos os dias, pode esquece dessa tambem",
        "Qual foi o Ano da independencia do Brazil",
        "Qual desses e radiativo"};

    const char *opcA[3][3] = {
        {"A) Halo", "B) assassin's creed ", "C) GTA 5"},
        {"A) 1989", "B) 1822", "C) 1914"},
        {"A) Tantalo", "B) Renio", "C) Uranio"},
    };

    const char respostaA[3] = {'C', 'B', 'C'};

    if (a == 'F')
    {
        for (int i = 0; i < 5; i++)
        {
            strcpy(b[i].questoes, frasesFilmes[i]);
            strcpy(b[i].opc[0], opcF[i][0]);
            strcpy(b[i].opc[1], opcF[i][1]);
            strcpy(b[i].opc[2], opcF[i][2]);
            b[i].respostas = respostaF[i];
        }
    }

    if (a == 'S')
    {
        for (int i = 0; i < 5; i++)
        {
            strcpy(b[i].questoes, frasesSeries[i]);
            strcpy(b[i].opc[0], opcS[i][0]);
            strcpy(b[i].opc[1], opcS[i][1]);
            strcpy(b[i].opc[2], opcS[i][2]);
            b[i].respostas = respostaS[i];
        }
    }

    if (a == 'A')
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

void Ganhou_Perdeu(int vida, int acertos, int Q_Perguntas)
{

    if (vida <= 0)
    {
        printf("GAME OVER");
    }
    else if (acertos == Q_Perguntas)
        printf("YOU WIN");
    else
    {
        printf("\nA sua pontuacao maxima foi de: %d", acertos);
    }
}

char converso_de_letras(char a)
{
    if (a >= 'a' && a <= 'z')
    {
        return a - 32;
    }
    else
        return a;
}

void LOGO_TIPO(void)
{
    printf("   __                          _          _       _ _       _       _           \n");
    printf("   \\ \\  ___   __ _  ___     __| | ___    /_\\   __| (_)_   _(_)_ __ | |__   __ _ \n");
    printf("    \\ \\/ _ \\ / _` |/ _ \\   / _` |/ _ \\  //_\\\\ / _` | \\ \\ / / | '_ \\| '_ \\ / _` |\n");
    printf(" /\\_/ / (_) | (_| | (_) | | (_| |  __/ /  _  \\ (_| | |\\ V /| | | | | | | | (_| |\n");
    printf(" \\___/ \\___/ \\__, |\\___/   \\__,_|\\___| \\_/ \\_/\\__,_|_| \\_/ |_|_| |_|_| |_|\\__,_|\n");
    printf("             |___/                                                              \n");
}

void START(void)
{
    printf(" _____                                     \n");
    printf("/ ____|                                    \n");
    printf("| |     ___  _ __ ___   ___  ___ ___  _   _ \n");
    printf("| |    / _ \\| '_ ` _ \\ / _ \\/ __/ _ \\| | | |\n");
    printf("| |___| (_) | | | | | |  __/ (_| (_) | |_| |\n");
    printf("\\_____\\___/|_| |_| |_|\\___|\\___\\___/ \\__,_|\n\n");
}

void Contando_Cacos(char *Parte, char *Parte_2, int *Q_Tentativas)
{

    Parte = malloc(*Q_Tentativas * sizeof(char));
    Parte_2 = malloc(*Q_Tentativas * sizeof(char));
    if (Parte == NULL || Parte_2 == NULL)
    {
        printf("Alocamento VetorVida(Erro)");
        exit(1);
    }
    else if (*Q_Tentativas > 0)
    {
        for (int i = 0; i < *Q_Tentativas; i++)
        {
            Parte[i] = '[';
            Parte_2[i] = ']';
        }
    }
    printf("\nVidas:");
    for (int i = 0; i < *Q_Tentativas; i++)
    {
        printf("%c", Parte[i]);
        printf("%c", Parte_2[i]);
    }

    free(Parte);
    free(Parte_2);
}

Perguntas *AlocamentoQuestoes(int Quantidade)
{
    Perguntas *Questoes = malloc(Quantidade * sizeof(Perguntas));

    if (Questoes == NULL)
    {
        printf("Erro no Alocamento Questao");
        exit(1);
    }
    else
        return Questoes;
}

char (*ptr_conversao)(char) = &converso_de_letras;

void Dropando_Questao(int Quantidade_Perguntas, Perguntas *Questoes, char *Part_1, char *Part_2, int *Vida, int *Acertos)
{

    Contando_Cacos(Part_1, Part_2, Vida);

    int Repeticao = Quantidade_Perguntas, v[Quantidade_Perguntas];

    char resposta;

    for (int i = 0; i < Quantidade_Perguntas; i++)
        v[i] = i;

    while (Repeticao)
    {
        int i = rand() % Repeticao;
        int x = v[i];

        printf("\nPergunta: %s\n%s\n%s\n%s", Questoes[x].questoes, Questoes[x].opc[0], Questoes[x].opc[1], Questoes[x].opc[2]);
        printf("\nInsira sua resposta:");
        scanf(" %c", &resposta);

        resposta = ptr_conversao(resposta);

        if (resposta == Questoes[x].respostas)
        {
            printf("Voce acertou!\n");
            *Acertos = *Acertos + 1;
        }
        else
        {
            printf("Voce errou\n");
            *Vida = *Vida - (1 & 1);
            Contando_Cacos(Part_1, Part_2, Vida);
        }
        v[i] = v[Repeticao - 1];
        Repeticao--;
    }
}

void Tabela_Jogadores(int Pontos)
{

    FILE *Tabelinha;

    Ranking *Tabela = malloc(sizeof(Ranking));

    if (Tabela == NULL)
    {
        printf("Erro no alocamento Tabela");
        exit(1);
    }
    else
    {
        Tabela->proximo = NULL;
        printf("\nNome do jogado: ");
        scanf("%s", &Tabela->Nome);
        Tabela->Acertos = Pontos;
    }
    Tabelinha = fopen("Ranking.txt", "a");
    fprintf(Tabelinha, "Nome: %s | Pontos: %c", Tabela->Nome, Tabela->Acertos + '0');
    fclose(Tabelinha);
}
