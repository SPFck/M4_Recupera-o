#include <stdio.h>

float calcular_media(float n, int nt) {
  return n/nt;
}

int main() {
  int n_alunos;
  float alunos[1024][1024];
  
  printf("Insira o número de alunos: ");
  scanf("%d", &n_alunos);
  for(int i = 0; i != n_alunos; i++) {
    float n_aluno, nota_testes;
    int n_testes, numero_testes;
    printf("Número do Aluno: ");
    scanf("%f", &n_aluno);
    printf("Número de testes: ");
    scanf("%d", &n_testes);
    for(int j = 0; j != n_testes; j++) {
      float nota_teste;
      printf("Nota do teste %d: ", j+1);
      scanf("%f", &nota_teste);
      nota_testes = nota_testes + nota_teste;
      numero_testes = numero_testes + 1;
    }
    alunos[i][0] = n_aluno;
    alunos[i][1] = calcular_media(nota_testes, numero_testes);
  }
  
  for(int i = 0; i != n_alunos; i++) {
    if(alunos[i][1] >= 10) {
      printf("O aluno Nº%.0f passou com uma média de %.2f.\n", alunos[i][0], alunos[i][1]);
    } else {
      printf("O aluno Nº%.0f reprovou com uma média de %.2f.\n", alunos[i][0], alunos[i][1]);
    }
  }
  
  return 0;
}
