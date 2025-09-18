
#include <stdio.h>
#include <stdlib.h>


  int main(void){

    int Escolha;
    printf("\n###\tEscolha nivel \t###");
    scanf("%d",&Escolha);
//O main vai comanda o nosso menu, e vamos bota funcoes em cada case com base no numero que o usuario declara na var X ele vai entra dentro da função e vai execurta a dificuldade nela
//Pode ser if else ou Switch case, eu acho o switch case mais bonito de ler ('-') e como o professor disse para menu ele é interessante ser utilizado.
//Talvez a manipulação de tempo seja interessante para deixa o terminal bonito, tipo, ele vai fica sujo com tantas pergutas, então podemos bota um system("clear");
    switch(Escolha){
      case 1:
      break;
      case 2:
      break;
      case 3:
      break;
      default:
      printf("Esse nivel não existe");
      return main();
    }

    return 0;
  }