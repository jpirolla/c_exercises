#include<stdlib.h>
#include<stdio.h>

// void indica não fazer nada 

int main(void){ 

	float calcular_area_quadrado(float base, float altura); // declaro minha função
	float area = calcular_area_quadrado(10.0, 20.0);

	printf("%f\n",area);
	return 0;
}

float calcular_area_quadrado(float base, float altura){ 

	float area = base * altura; 
	return area;
}