#include <stdio.h>
#include <stdlib.h>

//Variáveis globais
int TAM_10 = 10; //tamanho fixo do vetor1 e vetor2
int TAM_20 = 20; //tamanho fixo dos vetores de resultados das operações

/***********************************************
Função leituraVetor da tela:
- recebe como parâmetros de entrada um vetor de inteiros
- o tamanho do vetor
- a funçaõ não tem retorno
*/
void leituraVetor(int *v, int tam){
	for(int i = 0; i < tam; i = i + 1){
		printf("\nValor de v[%d] = : ",i);
		scanf("%d",&v[i]);
	}
	printf("\n-----------Fim da leitura do vetor -----------\n");
}
/***********************************************
Função leituraVetorArquivo:
- recebe como parâmetros de entrada um vetor de inteiros
- o tamanho do vetor
- a referência do arquivo do qual vão ser lidos os valores 
- a funçaõ não tem retorno
*/

void leituraVetorArquivo(int *v, int tam, FILE *arq){

	int valor = 0, result = 0;
	int i = 0;
  
	if (arq == NULL)  // Se houve erro na abertura
  {
     printf("Problemas na abertura do arquivo\n");
     return; //sair da função
  }

	/*faça a leitura do arquivo, linha por linha até achar o fim do arquivo EOF (End Of File) e enquanto a posição do vetor seja menor que o seu tamanho .*/
	while(result != EOF && i<tam) {
		result = fscanf(arq, "%d", &valor);
		v[i] = valor; //armazenar o valor  lido do arquivo no vetor na posição i
		i++; //incrementar a posição do vetor
	}
}


/***********************************************
Função imprimirVetor na tela:
 - recebe como parâmetros de entrada o vetor a ser impresso e o tamanho desse vetor.
 - a função não tem retorno
 */

void imprimirVetor(int *v, int tam){
	printf("|");
	for(int i = 0; i < tam; i = i + 1){
		printf(" %d |",v[i]);
	}
}

/***********************************************
Função impressaoVetorArquivo:
- recebe como parâmetros de entrada o vetor de inteiros a ser impresso no arquivo
- o tamanho do vetor que iremos imprimir no arquivo
- a funçaõ não tem retorno
*/

void impressaoVetorArquivo(int *v, int tam){

	FILE *arq; // cria variável ponteiro para o arquivo
	
	/*abrindo o arquivo com tipo de abertura "w".
	w: Permissão de abertura para escrita (write - gravação). Este código cria o arquivo caso ele não exista, e caso o mesmo exista ele RECRIA O ARQUIVO NOVAMENTE! fazendo com que o conteúdo seja perdido. Portanto devemos tomar muito cuidado ao usar esse tipo de abertura.*/
  arq = fopen("vetorResultado.txt", "w");
  
  //testando se o arquivo foi realmente criado
  if(arq == NULL)
  {
  	printf("Erro na abertura do arquivo!");
  	return; //sair da função
  }

	//percorremos o vetor para imprimir seus valores no arquivo
	for(int i = 0; i < tam; i++){
		//usamos a função fprintf() para imprimir no arquivo
		fprintf(arq,"%d\n",v[i]); 
	}

	 // fechando arquivo pois não vamos usá-lo mais no programa e é necessário liberar essa memória.
  fclose(arq);
}


//***** Funções de operações de vetores************//

/***********************************************
Função intercalarVetores:
- recebe dois vetores como parâmetros de entrada.
- os vetores de entrada são do tipo inteiro
- a função não tem retorno */

void intercalarVetores(int *v1, int *v2){
	//declara o vetor com um tamanho fixo
	int vetorIntercalacao[TAM_20];
	int opc;

	/*percorre os vetores v1[] e v2[] e armazena os valores no vetorIntercalacao[]*/
	for(int i = 0; i < TAM_10; i++){
		vetorIntercalacao[i*2] = v1[i];
		vetorIntercalacao[i*2+1] = v2[i];
	}

	printf("\n O vetor de intercalação é:\n");
	imprimirVetor(vetorIntercalacao, TAM_20);

	printf("\nDeseja imprimir o vetor resultante em um arquivo? 1 - Sim ____ ");
	scanf("%d",&opc);
	if(opc==1){
		impressaoVetorArquivo(vetorIntercalacao,TAM_20);
	}
}

/**********************************************
Função procurarValor:
- recebe um vetor como parâmetro de entrada
- recebe o tamanhho do vetor v 
- recebe um valor inteiro como parâmetro de entrada
- a função retorna 1 quando o valor é encontrado dentro do vetor
- a função retorna 0 quando o valor não é encontrado dentro do vetor
*/

int procurarValor(int *v, int tam, int valor){

	int achou = 0;
	for(int i = 0; i < tam; i++){
		if(v[i] == valor){
			achou = 1;
		}
	}
	return achou;
}

/**********************************************
Função uniaoVetores:
- recebe os dois vetores como parâmetros de entrada
- a função não tem retorno
*/

void uniaoVetores(int *v1, int *v2){

	int j = 0; //contador do tamanho real do vetorUniao
	int vetorUniao[TAM_20]; //vetor com no máximo 20 posições
	int valor;
	int opc;

	vetorUniao[0] = v1[0];
	//copiando valores não repetidos do v1 no vetorUniao. Para isso percorremos todo o v1
	for(int i = 0; i < TAM_10; i++){
		if(procurarValor(vetorUniao,j,v1[i])==0){
			//se o valor de v1 na posição i não é repetido, então armazenar o valor no vetorUniao na posição j
			vetorUniao[j] = v1[i];
			//como adicionamos um valor no vetorUniao, aumentamos o contador de posições j
			j++;
		}
	}
	//terminamos de percorrer v1

	////copiando valores não repetidos do v2 no vetorUniao. Para isso percorremos todo o v2
	for(int i = 0; i < TAM_10; i++){
		if(procurarValor(vetorUniao,j,v2[i])==0){
			//se o valor de v2 na posição i não é repetido, então armazenar o valor no vetorUniao na posição j
			vetorUniao[j] = v2[i];
			//como adicionamos um valor no vetorUniao, aumentamos o contador de posições j
			j++;
		}
	}

	printf("\n O vetor de união é:\n");
	imprimirVetor(vetorUniao, j);

	printf("\nDeseja imprimir o vetor resultante em um arquivo? 1 - Sim ____ ");
	scanf("%d",&opc);
	if(opc==1){
		impressaoVetorArquivo(vetorUniao,j);
	}
}

/**********************************************
Função diferencaVetores:
- recebe os dois vetores como parâmetros de entrada
- a função não tem retorno
*/

void diferencaVetores(int *v1, int *v2){
	
	int vetorDiferenca[TAM_10]; //declarar vetor com no máximo 10 posições
	int j; //contador das posições preenchidas no vetorDiferenca
	int opc;

	//calculo os elementos do vetor v1[] que não existam no vetor v2[], sem repetições
	//para isso vamos percorrer todos os elementos do vetor v1
	for(int i = 0; i < TAM_10; i++){
		
		if(procurarValor(v2,TAM_10,v1[i]) == 0 && procurarValor(vetorDiferenca,TAM_10,v1[i]) == 0){
			//se o valor do vetor v1[] na posição i não estiver no vetor v2[] _E_ se esse valor não foi registrado ainda vetorDiferenca[], então armazenar esse valor no vetorDiferenca[] na posição j		

			vetorDiferenca[j] = v1[i];
			j++; //incrementamos a posição do vetorDiferenca
		}
	}

	//imprimir todos os valores do vetorDiferenca 
	printf("\n O vetor da diferença de valores entre v1 e v2 é:\n");
	imprimirVetor(vetorDiferenca, j);

	printf("\nDeseja imprimir o vetor resultante em um arquivo? 1 - Sim ____ ");
	scanf("%d",&opc);
	if(opc==1){
		impressaoVetorArquivo(vetorDiferenca,j);
	}

}

/**********************************************
Função somaVetores:
- recebe os dois vetores como parâmetros de entrada
- a função não tem retorno
*/
void somaVetores(int *v1, int *v2){

	int vetorSoma[TAM_10];
	int opc;

	for(int i =0; i < TAM_10; i++){
		vetorSoma[i] = v1[i] + v2[i];
	}

	printf("\n O vetor da soma de valores entre v1 e v2 é:\n");
	imprimirVetor(vetorSoma, TAM_10);

	printf("\nDeseja imprimir o vetor resultante em um arquivo? 1 - Sim ____ ");
	scanf("%d",&opc);
	if(opc==1){
		impressaoVetorArquivo(vetorSoma,TAM_10);
	}

}

/**********************************************
Função produtoVetores:
- recebe os dois vetores como parâmetros de entrada
- a função não tem retorno
*/
void produtoVetores(int *v1, int *v2){

	int vetorProduto[TAM_10];
	int opc;
	for(int i =0; i < TAM_10; i++){
		vetorProduto[i] = v1[i] * v2[i];
	}

	printf("\n O vetor do produto entre v1 e v2 é:\n");
	imprimirVetor(vetorProduto, TAM_10);

	printf("\nDeseja imprimir o vetor resultante em um arquivo? 1 - Sim ____ ");
	scanf("%d",&opc);
	if(opc==1){
		impressaoVetorArquivo(vetorProduto,TAM_10);
	}

}

/**********************************************
Função intersecaoVetores:
- recebe os dois vetores como parâmetros de entrada
- a função não tem retorno
*/

void intersecaoVetores(int *v1, int *v2){

	int vetorIntersecao[TAM_10]; //declarar vetor com no máximo 10 posições
	int j; //contador das posições preenchidas no vetorIntersecao
	int opc;

	//calculo os elementos do vetor v1[] que existam TAMBÉM no vetor v2[], sem repetições
	//para isso vamos percorrer todos os elementos do vetor v1
	for(int i = 0; i < TAM_10; i++){
		
		if(procurarValor(v2,TAM_10,v1[i]) == 1 && procurarValor(vetorIntersecao,TAM_10,v1[i]) == 0){
			//se o valor do vetor v1[] na posição i  estiver no vetor v2[] _E_ se esse valor não foi registrado ainda vetorIntersecao[], então armazenar esse valor no vetorIntersecao[] na posição j		

			vetorIntersecao[j] = v1[i];
			j++; //incrementamos a posição do vetorIntersecao
		}
	}

	//imprimir todos os valores do vetorIntersecao 
	printf("\n O vetor da interseção de valores entre v1 e v2 é:\n");
	imprimirVetor(vetorIntersecao, j);

	printf("\nDeseja imprimir o vetor resultante em um arquivo? 1 - Sim ____ ");
	scanf("%d",&opc);
	if(opc==1){
		impressaoVetorArquivo(vetorIntersecao,j);
	}

}

/**********************************************
Função menú:
- recebe os dois vetores como parâmetros de entrada
- a função não tem retorno
*/
void menu(int *v1, int *v2){

	int opc;

	system("clear");

	printf("\n::::::::::: BEM-VIND@ AO PROGRAMA DE OPERAÇÕES ENTRE DOIS VETORES ::::::::\n\n");

	printf("\n\n v1 = ");
	imprimirVetor(v1, TAM_10);

	printf("\n\n v2 = ");
	imprimirVetor(v2, TAM_10);

	printf("\n\nSelecione a operação entre vetores:");
	printf("\n1 - Soma;");
	printf("\n2 - Produto;");	
	printf("\n3 - Intercalação;");
	printf("\n4 - União;");
	printf("\n5 - Diferença;");	
	printf("\n6 - Interseção;");
	printf("\n ___ ");

	scanf("%d",&opc);

	switch(opc){
		case 1:
			somaVetores(v1,v2);
			break;
		case 2:
			produtoVetores(v1,v2);
			break;
		case 3:
			intercalarVetores(v1,v2);
			break;
		case 4:
			uniaoVetores(v1,v2);
			break;
		case 5:
			diferencaVetores(v1,v2);
			break;
		case 6:
			intersecaoVetores(v1,v2);
			break;	
		default:
			break;
	}
}


/**********************************************
Inicio do main*/
int main(void) {
  
	int opc = 1;
	int v1[TAM_10], v2[TAM_10];
	
	// criando a variável que vai referenciar o arquivo do vetor1
  FILE *arq1, *arq2;
	
	/*a seguir os arquivos  v1.txt  e v2.txt é aberto em modo só de leitura 'r'.
	r: Permissão de abertura somente para leitura. É necessário que o arquivo já esteja presente no disco.*/
  arq1 = fopen("v1.txt", "r"); //arquivo v1.txt contêm os valores do vetor v1
	arq2 = fopen("v2.txt", "r"); //arquivo v1.txt contêm os valores do vetor v1

	system("clear");
	printf("\n::::::::::: BEM-VIND@ AO PROGRAMA DE OPERAÇÕES ENTRE DOIS VETORES ::::::::\n\n");

	printf("\nLendo os números do vetor 1:\n");
	leituraVetorArquivo(v1, TAM_10, arq1);
	printf("\nLendo os números do vetor 2:\n");
	leituraVetorArquivo(v2, TAM_10, arq2);

	//usando fclose para fechar os arquivos após a leitura. Necessário para liberar a memória ocupada pelos arquivos que não vão ser mais usados no programa.
  fclose(arq1);
	fclose(arq2);

	while(opc == 1){
		menu(v1,v2);

		printf("\n\nDigite 1 para continuar com outra operação, ou outro número para sair __ ");
		scanf("%d",&opc);
	}

	printf("\n\n... finalizando o programa ... \n");

  return 0;
}