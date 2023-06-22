// Matrizes: é um array de arrays ou um array multidimensional
// int m[3][3] = matriz bidimensional
// int m[3][4][7] = matriz tridimensional
// exemplo da aula: matriz m[5][5] unindo um array alunos e o array notas, o array alunos tem 5 elementos e o array notas 5 elementos


/*Rascunho alunos x notas
#include <stdio.h>

int main() {

  int a , n;
  int m[2][2];
  printf("Forneça duas notas de dois alunos da turma:\n");
  scanf("%d" , &m[2][2]);

  for(a = 1 ; a<=2 ; a++) {

    for(n = 1 ; n<=2 ; n++) {

      printf( "A matriz de alunos x notas %d" , m[2][2]);
    }
  }

  return 0;
}*/

//Exercício lista 9 q1

#include <stdio.h>

void exibeTotalVendasGol(int vendas[6][12] , float preco[6]) {

  float valorAno;
  for( int ano=0; ano<6 ; ano++) {
    valorAno=0;
    for(int mes=0; mes<12; mes++){
      valorAno += vendas[ano][mes] * preco[ano];
    }
    printf("O total arrecadado em %d é %.2f" , 2010+ ano, valorAno);
  }
}

