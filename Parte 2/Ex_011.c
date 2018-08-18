/*11.Faça um procedimento que recebe 2 vetores A e B de tamanho 15 de inteiros, por parâmetro. O vetor B deve conter o somatório de cada elemento de A.*/
int main(int argc, char const *argv[]) {

int vetA[15];
int vetB[15];

int i = 0;
for ( i = 0; i < 15; i++ ){
	printf("[%d]Valor: ", i);
	scanf(" %d", &vetA[i] );
 }

for ( i = 0; i < 15; i++ ){
	 vetB[i] += vetA[i];
 }

for ( i = 0; i < 15; i++ ){
	 printf("[%d] Valor: %d\n", i, vetB[i] );
 }
 }
