#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* a biblioteca math.h não compila sem o código -lm */
#include <math.h>

/* functions declarations */
char * introduction();
void addition();
void subtraction();
void multiplication();
void division();
void potentiation();
void radiciation();

/* main function */
int main() {
  char *action;
  action=malloc(1*sizeof(char));
  printf("------------------Bem vindo(a) a calculadora------------------\n");
  while(strcmp(action, "s") != 0) {
    action = introduction();
  }
  return 0;
}

/* aux functions */
char * introduction() {
  char *action;
  action=malloc(1*sizeof(char));

  printf("--------------------------------------------\n");
  printf("Escolha uma operação ou digite 's' para sair\n");
  printf("Opções:\n");
  printf("[+] Adção\n[-] Subtração\n[*] Multiplicação\n[/] Divisão\n[^] Potenciação\n[r] Radiciação\n\n");
  scanf(" %c", action);

  (strcmp(action, "+") == 0) ? addition() : 0;
  (strcmp(action, "-") == 0) ? subtraction() : 0;
  (strcmp(action, "*") == 0) ? multiplication() : 0;
  (strcmp(action, "/") == 0) ? division() : 0;
  (strcmp(action, "^") == 0) ? potentiation() : 0;
  (strcmp(action, "r") == 0) ? radiciation() : 0;

  return action;
}

void addition() {
  int res, num1, num2;

  printf("Qual o primeiro valor da soma?\n");
  scanf("%d", &num1);
  printf("qual o segundo valor da soma?\n");
  scanf("%d", &num2);

  res = num1 + num2;
  printf("\nO resultado é: %d\n\n", res);
}

void subtraction() {
  int res, num1, num2;
  
  printf("Qual o primeiro valor da subtração?\n");
  scanf("%d", &num1);
  printf("qual o segundo valor da subtração?\n");
  scanf("%d", &num2);

  res = num1 - num2;
  printf("\nO resultado é: %d\n\n", res);
}

void multiplication() {
  int res, num1, num2;

  printf("qual o primeiro valor da Multiplicação?\n");
  scanf("%d", &num1);
  printf("qual o segundo valor da Multiplicação?\n");
  scanf("%d", &num2);

  res = num1 * num2;
  printf("\nO resultado é: %d\n\n", res);
}

void division() {
  int res, num1, num2;

  printf("qual o valor do numerador?\n");
  scanf("%d", &num1);
  printf("qual o valor do denominador?\n");
  scanf("%d", &num2);

  res = num1 / num2;
  printf("\nO resultado é: %d\n\n", res);
}

void potentiation() {
  int res, num1, num2;

  printf("qual o valor da base?\n");
  scanf("%d", &num1);
  printf("qual o valor do expoente?\n");
  scanf("%d", &num2);

  res = pow(num1, num2);
  printf("\nO resultado é: %d\n\n", res);
}

void radiciation() {
  int num1, num2;
  double res;

  printf("qual o radicando?\n");
  scanf("%d", &num1);
  printf("qual o radical?\n");
  scanf("%d", &num2);

  res = pow(num1, (1/2));

  printf("\nO resultado é: %lf\n\n", res);
}

