#include <stdio.h>

int main(){
    
/* Modelo:
    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50
*/
    char estado1;
    char codigo1[3];
    char cidade1[20];
    int populacao1;
    float area1, pib1;
    int pontos1;
    
    printf("Digite o estado da Carta 1: \n");
    scanf("%s", &estado1);
	
	printf("Digite o codigo da Carta 1: \n");
	scanf("%s", &codigo1);
	
	printf("Digite a cidade da Carta 1: \n");
	scanf("%s", &cidade1);
	
	printf("Digite o total da populacao da Carta 1: \n");
	scanf("%d", &populacao1);
	
	printf("Digite a area da Carta 1: \n");
	scanf("%f", &area1);
	
	printf("Digite o PIB da Carta 1: \n");
	scanf("%f", &pib1);
	
	printf("Digite o total de pontos turisticos: \n");
	scanf("%d", &pontos1);
	
	printf("Carta 1 \n");
	printf("Estado: %s \n", estado1);
	printf("Codigo: %s \n", codigo1);
	printf("Cidade: %s \n", cidade1);
	printf("Populacao: %d \n", populacao1);
	printf("Area: %f \n", area1);
	printf("PIB: %f \n", pib1);
	printf("Pontos Turisticos: %d \n", pontos1);
	
     
     
    
    }

