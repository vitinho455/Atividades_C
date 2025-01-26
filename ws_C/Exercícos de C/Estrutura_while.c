#include <stdio.h>
#include <string.h>


int main()
{
    int i, n;

    printf("Digite a quantidade de numeros no seu vetor:");
    scanf("%i", &n);

    int vet[n];

    for(i = 0; i < n; i++)
    {

        printf("Adicione o valor para o seu vetor: " );
        scanf("%i", &vet[i]);

    }


    printf("Matriz Gerada");

    for(i = 0; i < n; i++)
    {
        if(vet[i] < 0)
        {
            printf("%i\n", vet[i]);


        }
        else
        {
            printf("Matriz correta!");
        }
        printf("%i\n", vet[i]);
    }
    return 0;
}







