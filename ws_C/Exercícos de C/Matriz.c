#include <stdio.h>


int main()
{

    int l,c, m, n;

    printf("Digite a quantidade de linhas na sua matriz: ");
    scanf("%d", &m);

    printf("Digite a quantidade de colunas na sua matriz: ");
    scanf("%d", &n);

    int vet[m][n];

    for(l = 0; l < m; l++)
    {

        for(c = 0; c < n; c++)
        {
            printf("Digite os valores do elemento[%d][%d]:", l,c);
            scanf("%d", &vet[l][c]);

        }

    }

    printf("\n");


    printf("Matriz Gerada = " );


    for(l = 0; l < m; l++){
        for(c = 0; c < n; c++){

          printf("%d", vet[l][c]);


        }

    }




    printf("\n");


    printf("Matriz Negativa = ");

    for(l = 0; l < m; l++)
    {

        for(c = 0; c < n; c++)
        {

            if(vet[l][c] < 0)
            {
                printf("%d", vet[l][c]);

            }
            else
            {
                return 0;
            }
        }

    }

    return 0;

}
