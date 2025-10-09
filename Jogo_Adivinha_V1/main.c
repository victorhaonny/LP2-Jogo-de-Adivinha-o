// ########################################
//  CIC UESC - LP2
//  Aluno: Victor e Reginaldo
//  Data: 09/10/2025
// ########################################
#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include "Prototipos.h"

int main(void)
{

    Perguntas Questoes[3];

    Perguntas *PonteiroQ = Questoes;

    char Letra, Categoria, resposta;

    int vida, Acertos = 0;

    int *ptr_v = &vida;

    printf("\nEscolha a dificuldade:\nFacil(F)\nMedio(M)\nDificil(D)\n");
    scanf("%c", &Letra);
    getchar();
    dificuldade(Letra, ptr_v);

    printf("\nEscolha Categoria: \nFilmes(F) \nSeries(S) \nAleatorio(A)");
    scanf("%c", &Categoria);

    getchar();

    escolhendo_categoria(Categoria, PonteiroQ);

    getchar();

    printf("\n#####JOGO#####");

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