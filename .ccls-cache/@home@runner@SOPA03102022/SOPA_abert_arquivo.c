//Trabalho SOPA - 03/10/2022
#include <stdio.h>
#include <conio.h>

int main(void) {
  FILE *pont_arq;
  char nome[20];

  //abertura do arquivo
  pont_arq = fopen("arquivo_nome.txt", "a");
  
  if(pont_arq == NULL){
    printf("Erro ao abrir o arquivo.");
    return 1;
  }
  else{
    printf("Escreva um nome para gravar no arquivo:  ");
    scanf("%s", nome);

    fprintf(pont_arq, "%s \n", nome);

    //fechamento do arquivo
    fclose(pont_arq);

    printf("Dados gravados com sucesso");
  }

  getch();
  return(0);
}