#include "Prototipos.h"
#include <stdio.h>

void dificuldade(char a, int* b){

    if(a != 'f' && a != 'm' && a != 'd'){
        printf("Dificuldade inserida errada, definindo dificuldade como ""normal");
            *b = 2;
    }
    if (a == 'f')
        *b = 4;
        else if(a == 'm')
            *b = 2;
             else if(a == 'd')
                *b = 1;
}

Perguntas Perguntas_Categorias(int a, char b, Perguntas d){

    /*
    if(b=='F')
        return d;
        else if(b=='S')
            return 0;
        else if(b=='A')
                return;

*/
}
                
