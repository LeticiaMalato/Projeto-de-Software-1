#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
// TITULO DO JOGO
// 1: Pergunta e resposta
// 2: Cobra na caixa!
// 3: Sair.

int jogarPerguntaReposta()
{

  int userChoice;
  int answers;

  for (int i = 0; i <= 5; i++)
  {
    printf("Você tem 5 perguntas para responder \n");
    printf("1- Qual deles não é filho do Michael Jackson? \n");
    printf("1- Paris 2- Prince 3- Michael Jr 4- Bruno Mars 5- Joe \n");
    scanf("%d", &answers);

    if (answers == 5)
    {
      printf("Parabens!!! Você acertou\n");
    }
    else
    {
      printf("Resposta incorrta! Resposta certa é: numero 5 \n");
      printf("Obs: old que todo mundo sabe que o Bruno Mars é filho do Michael Jackson\n");
    }

    printf("2- Qual o grupo em que todas as palavras foram escritas corretamente?\n");
    printf("1- Asterístico, beneficiente, meteorologia, entertido\n 2-Asterisco, beneficente, meteorologia, entretido\n3 Asterisco, beneficente, metereologia, entretido\n 4-Asterístico, beneficiente, metereologia, entretido\n5- Asterisco, beneficiente, metereologia, entretido\n");

    scanf("%d", &answers);

    if (answers == 2)
    {
      printf("Parabéns!!! Você acertou\n");
    }
    else
    {
      printf("Resposta incorrta! Resposta certa é: numero 2\n");
    }

    printf("3- Atualmente, quantos elementos químicos a tabela periódica possui?\n ");
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

    char jogar_novamente;
    printf("\nQuer jogar novamente? (s/n): ");
    scanf(" %c", &jogar_novamente);
    if (jogar_novamente == 's' || jogar_novamente == 'S')
    {
      jogarPerguntaReposta();
    }

    return 0;
  }
}

int jogarCobraNaCaixa()
{
  srand(time(NULL));

  char player1[50];
  char player2[50];

  bool achou_botao = false;
  bool achou_cobra = false;

  int caixas[5] = {0, 0, 0, 0, 0};

  int index_botao = rand() % 5;
  int snake_index = rand() % 5;

  do
  {
    snake_index = rand() % 5;
    index_botao = rand() % 5;
  } while (snake_index == index_botao);

  caixas[index_botao] = 2;
  caixas[snake_index] = 3;

  printf("Digite o nome do jogador 1: ");
  scanf("%s", player1);

  printf("Digite o nome do jogador 2: ");
  scanf("%s", player2);

  int primeiro_a_jogar = rand() % 2;
  printf("%d", primeiro_a_jogar);

  if (primeiro_a_jogar == 0)
    printf("Jogador %s começa!\n", player1);
  else
  {
    printf("Jogador %s começa!\n", player2);
  }

  while (!achou_botao && !achou_cobra)
  {
    int numero_da_caixa;

    if (primeiro_a_jogar == 0)
    {
      printf("Jogador %s, escolha uma caixa (1 a 5): ", player1);
      scanf("%d", &numero_da_caixa);
    }
    else
    {
      printf("Jogador %s, escolha uma caixa (1 a 5): ", player2);
      scanf("%d", &numero_da_caixa);
    }

    if (numero_da_caixa < 1 || numero_da_caixa > 5)
    {
      printf("Escolha inválida! Tente novamente.\n");
    }
    else
    {
      numero_da_caixa--;
      if (caixas[numero_da_caixa] == 1)
      {
        printf("Esta caixa já foi aberta! Tente outra.\n");
      }
      else
      {
        if (caixas[numero_da_caixa] == 2)
        {
          printf("Parabéns, você encontrou o botão! Você ganhou!\n");
          achou_botao = true;
        }
        else if (caixas[numero_da_caixa] == 3)
        {
          printf("Você encontrou uma cobra! Você perdeu!\n");
          achou_cobra = true;
        }
        else
        {
          caixas[numero_da_caixa] = 1;
          printf("A caixa está vazia.\n");
        }

        primeiro_a_jogar = (primeiro_a_jogar == 1) ? 0 : 1;
      }
    }
  }

  char jogar_novamente;
  printf("\nQuer jogar novamente? (s/n): ");
  scanf(" %c", &jogar_novamente);
  if (jogar_novamente == 's' || jogar_novamente == 'S')
  {
    jogarCobraNaCaixa();
  }

  return 0;
}

int main()
{

  printf("Jogos de programa!\n");

  int userChoice;

  while (true)
  {
    printf("Voce deseja:\n 1-Jogar Pergunta e Resposta.\n 2- Jogar cobra na caixa!\n 3- Sair\n ");
    scanf("%d", &userChoice);

    if (userChoice == 1)
    {
      jogarPerguntaReposta();
    }
    else if (userChoice == 2)
    {
      jogarCobraNaCaixa();
    }
    else if (userChoice == 3)
    {
      printf("Saindo... \n");
      break;
    }
  }
}