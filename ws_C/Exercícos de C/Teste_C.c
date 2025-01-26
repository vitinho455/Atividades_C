#include <stdio.h>
#include <string.h>


void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

int main()
{
    char nome[50];
    int idade, peso;
    double altura, nota1,nota2, media;

    printf("Digite seu nome: ");
    ler_texto(nome, 50);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%d", &peso);

    printf("Digite sua altura: ");
    scanf("%lf", &altura);

    printf("Digite sua primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite sua segunda nota nota: ");
    scanf("%lf", &nota2);

    media = (nota1 + nota2) / 2;

  if (media > 6.0){
    printf("Aprovado!\n");
  }
  else{

    printf("Reprovado!\n");
  }

    printf("Nome = %s\n", nome);
    printf("Idade = %d\n", idade);
    printf("Peso = %.2lf\n", peso);
    printf("Altura = %.2lf\n", altura);
    printf("Nota 1 = %.1lf\n", nota1);
    printf("Nota 2 = %.1lf\n", nota2);
    printf("Media = %1.lf\n", media);

    return 0;

}





