#include <stdio.h>
// TITULO DO JOGO
// 1: Pergunta e resposta
// 2: Cobra na caixa!
// 3: Sair.
int main()
{

  printf("Jogos de programa!\n");

  int userChoice;
  int questions;
  int answers;
 

  printf("Voce deseja:\n 1-Jogar Pergunta e Resposta.\n 2- Jogar cobra na caixa!\n 3- Sair\n ");
  scanf("%d", &userChoice);

  if (userChoice == 1)
  {
    for (int i = 0; i <= 5; i++)
    {
      printf("voce tem 5 perguntas para responder\n");
      printf("1- Qual deles não é filho do Michael Jackson?\n ");
      printf("1- Paris 2- Prince 3- Michael Jr 4- Bruno Mars 5- Joe\n ");
      scanf("%d", &questions);

      if (answers == 5)
      {
        printf("Parabens!!! voce acertou\n");
      }
      else
      {
        printf("Resposta incorrta! Resposta certa é: numero 5\n");
        printf("Obs: old que todo mundo sabe que o Bruno Mars é filho do Michael Jackson\n");
      }

      printf("2- Qual o grupo em que todas as palavras foram escritas corretamente?\n ");
      printf("1- Asterístico, beneficiente, meteorologia, entertido\n 2-Asterisco, beneficente, meteorologia, entretido\n3 Asterisco, beneficente, metereologia, entretido\n 4-Asterístico, beneficiente, metereologia, entretido\n5- Asterisco, beneficiente, metereologia, entretido\n ");

      scanf("%d", &answers);

      if (answers == 2)
      {
        printf("Parabéns!!! voce acertou\n");
      }
      else
      {
        printf("Resposta incorrta! Resposta certa é: numero 2\n");
     
      }

      printf("3-  Atualmente, quantos elementos químicos a tabela periódica possui?\n ");
      printf("1- 113\n 2- 109\n3- 108\n4-118\n5-92\n ");
      scanf("%d", &answers);

      if (answers == 1)
      {
        printf("Parabéns!!! voce acertou");
      }
      else
      {
        printf("Resposta incorrta! Resposta certa é: numero 1\n");
        
        break;
      }
      if (answers == 5)
      {
        printf("Parabéns!!! voce acertou");
      }
      else
      {
        printf("Resposta incorrta! Resposta certa é: numero 5\n");
        
        break;
      }
      if (answers == 5)
      {
        printf("Parabéns!!! voce acertou");
      }
      else
      {
        printf("Resposta incorrta! Resposta certa é: numero 5\n");
        
        break;
      }
    }
  }

}