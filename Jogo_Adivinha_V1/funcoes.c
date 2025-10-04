#include "Prototipos.h"
#include <stdio.h>

void dificuldade(char a, int* b){

    if(a != 'f' && a != 'm' && a != 'd'){
        printf("Dificuldade inserida errada, definindo dificuldade como ""normal");
            *b = 3;
    }
    if (a == 'f')
        *b = 5;
        else if(a == 'm')
            *b = 3;
             else if(a == 'd')
                *b = 1;
}

void Perguntas_Categorias(int a, char b){}