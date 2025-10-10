#include <stdio.h>
#include <stdlib.h>
#define Q 3
typedef struct
{
    char questoes[100];
    char opc[3][50];
    char respostas;

} Perguntas;

int dificuldade(char a, int b);

Perguntas escolhendo_categoria(char a, Perguntas b);

void Ganhou_Perdeu(int vida, int acertos);

char converso_de_letras(char a);

int main(void)
{
    printf("   __                          _          _       _ _       _       _           \n");
    printf("   \\ \\  ___   __ _  ___     __| | ___    /_\\   __| (_)_   _(_)_ __ | |__   __ _ \n");
    printf("    \\ \\/ _ \\ / _` |/ _ \\   / _` |/ _ \\  //_\\\\ / _` | \\ \\ / / | '_ \\| '_ \\ / _` |\n");
    printf(" /\\_/ / (_) | (_| | (_) | | (_| |  __/ /  _  \\ (_| | |\\ V /| | | | | | | | (_| |\n");
    printf(" \\___/ \\___/ \\__, |\\___/   \\__,_|\\___| \\_/ \\_/\\__,_|_| \\_/ |_|_| |_|_| |_|\\__,_|\n");
    printf("             |___/                                                              \n");

    Perguntas Questoes[3];

    char Letra, Categoria, resposta;

    int vida, Acertos = 0, Quantidade = Q;

    printf("\nEscolha a dificuldade:\nFacil(F)\nMedio(M)\nDificil(D)\n");
    scanf("%c", &Letra);
    vida = dificuldade(Letra, vida);

    printf("\nEscolha Categoria: \nFilmes(F) \nSeries(S) \nAleatorio(A)");
    scanf("%c", &Categoria);

    while (Quantidade)
    {
        Questoes[Quantidade] = escolhendo_categoria(Categoria, Questoes[Quantidade]);
        Quantidade--;
    }

    printf("\n#####COMECOU#####");

    srand(time(NULL));

    int Repeticao = 3;
    int v[3] = {0, 1, 2};
    while (Repeticao)
    {
        int i = rand() % Repeticao;
        int x = v[i];

        printf("\nPergunta: %s\n%s\n%s\n%s", Questoes[x].questoes, Questoes[x].opc[0], Questoes[x].opc[1], Questoes[x].opc[2]);
        printf("\nInsira sua resposta:");
        scanf(" %c", &resposta);

        resposta = converso_de_letras(resposta);

        if (resposta == Questoes[x].respostas)
        {
            printf("Voce acertou!\n");
            Acertos = Acertos + 1;
        }
        else
        {
            printf("Voce errou :\n");
            vida--;
        }
        v[i] = v[Repeticao - 1];
        Repeticao--;
        printf("Acertos: %d\n", Acertos);
        printf("Vidas: %d\n", vida);
    }

    Ganhou_Perdeu(vida, Acertos);

    return 0;
}

int dificuldade(char a, int b)
{

    converso_de_letras(a);

    if (a != 'F' && a != 'M' && a != 'D')
    {
        printf("\nDificuldade inserida errada, definindo dificuldade como "
               "normal");
        b = 2;
    }

    if (a == 'F')
        b = 3;
    else if (a == 'M')
        b = 2;
    else if (a == 'D')
        b = 1;
}

Perguntas escolhendo_categoria(char a, Perguntas b)
{

    char frasesFilmes[3][100] = {
        "Vou fazer uma oferta que ele nao podera recusar",
        "Com grandes poderes vem grandes responsabilidades",
        "Eu sou a vinganca"};

    char opcF[3][3][50] = {
        {"A) Poderoso Chefao", "B) Lobo de Wall Street", "C) A Grande Aposta"},
        {"A) Homem de Ferro", "B) Homem Aranha", "C) Homem invisivel"},
        {"A) V de Vinganca", "B) Game of Thrones", "C) Batman"},
    };

    const char respostaF[3] = {'A', 'B', 'C'};

    const char frasesSeries[3][100] = {
        "Eu nao estou em perigo, eu sou o perigo",
        "Voce falhou com essa cidade",
        "Eu faco minha propria sorte"};

    const char opcS[3][3][50] = {
        {"A) Breaking Bad", "B) Peaky Blinders", "C) vikings"},
        {"A) Flash", "B) Arrow", "C) Titans"},
        {"A) La Casa de Papel", "B) Squid Game", "C) Suits"},
    };

    const char respostaS[3] = {'A', 'B', 'C'};

    const char frasesAleatorio[3][100] = {
        "Voce esquece de varias coisas todos os dias, pode esquece dessa tambem",
        "Qual foi o Ano da independencia do Brazil",
        "Qual desses e radiativo"};

    const char opcA[3][3][50] = {
        {"A) Halo", "B) assassin's creed ", "C) GTA 5"},
        {"A) 1989", "B) 1822", "C) 1914"},
        {"A) Tântalo", "B) Rênio", "C) Uranio"},
    };

    const char respostaA[3] = {'C', 'B', 'C'};

    if (a == 'f' || a == 'F')
    {
        for (int i = 0; i < 3; i++)
        {
            strcpy(b.questoes, frasesFilmes[0]);
            strcpy(b.opc[0], opcF[i][0]);
            strcpy(b.opc[1], opcF[i][1]);
            strcpy(b.opc[2], opcF[i][2]);
            b.respostas = respostaF[0];
        }
        return b;
    }

    if (a == 's' || a == 'S')
    {
        for (int i = 0; i < 3; i++)
        {
            strcpy(b.questoes, frasesSeries[i]);
            strcpy(b.opc[0], opcS[i][0]);
            strcpy(b.opc[1], opcS[i][1]);
            strcpy(b.opc[2], opcS[i][2]);
            b.respostas = respostaS[i];
        }
        return b;
    }

    if (a == 'a' || a == 'A')
    {
        for (int i = 0; i < 3; i++)
        {
            strcpy(b.questoes, frasesAleatorio[i]);
            strcpy(b.opc[0], opcA[i][0]);
            strcpy(b.opc[1], opcA[i][1]);
            strcpy(b.opc[2], opcA[i][2]);
            b.respostas = respostaA[i];
        }
        return b;
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

char converso_de_letras(char a)
{

    if (a >= 'a' && a <= 'z')
    {
        return a - 32;
    }
    else
        return a;
}