/*2. Faça um procedimento que receba o vetor de registro definido no exercício anterior (28), por parâmetro, e retorna também por parâmetro: a maior idade entre os habitantes e a quantidade de individuos do sexo feminino cuja idade está entre 18 e 35 (inclusive) e que tenham olhos verdes e cabelos louros.*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
    float porcentagemFeminina;
    int idade, maiorIdade, contPorcentagem, cont;
    char sexo[50], corOlhos[50], corCabelos[50];

    contPorcentagem = 0;
    maiorIdade = 0;
    cont = 0;

    do {
        cont++;
        printf("Informe o sexo:\n");
        scanf("%s", &sexo);
        printf("Informe a cor dos olhos:\n");
        scanf("%s", &corOlhos);
        printf("Informe a cor dos cabelos:\n");
        scanf("%s", &corCabelos);
        printf("Informe a idade:\n");
        scanf("%d", &idade);
        if ((strcmp (sexo,"feminino") == 0) && ((idade >= 18) && (idade <= 35)) && (strcmp (corOlhos,"verdes") == 0) && (strcmp (corCabelos,"louros") == 0)) {
            contPorcentagem++;
        }
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
    }
    while (idade != -1);
    printf("Maior idade: %d\n", maiorIdade);
    porcentagemFeminina = (100 * contPorcentagem)/cont;
    printf("Porcentagem feminina com olhos verdes, cabelos louros que estão entre 18 e 35 anos: %.2f\n", porcentagemFeminina);
}
