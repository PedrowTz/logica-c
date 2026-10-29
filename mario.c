#include <cs50.h>
#include <stdio.h>

    int main(void)
{
// declaramos que a variavel é um numero inteiro,  no caso "altura"

    int altura;
// o "do" executa o cod ao menos uma vez
    do
{
         altura = get_int("Height: ");
}
// o while tendo como condiçao repetir o cod enquanto a altura ser menor que 1 e maior que 8

    while (altura < 1 || altura > 8);


// no caso, esse for é feito para criar o numero de linhas em relacao a altura, ou seja, o loop vai rodar até que alcance o numero de altura inserido

    for (int i = 0; i < altura; i++)
{
// no caso, esse for é feito para adicionar o numero de "." em relaçao aos espaços necessario para manter a organizaçao na piramide

    for (int j = 0; j < altura - i - 1; j++)
        {
            printf(".");
        }

//no caso, esse for é feito para criar o numero de # em relacao a altura

    for (int k = 0; k < i +1; k++)
{
    printf("#");
}

// comando poara Pular para a próxima linha e nao deixar tudo junto
        printf("\n");

}
}

