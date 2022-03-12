// Ordenamiento por Selección

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {3,4,5,2,1};
	int i,j,aux,min;
	
	for(i=0;i<5;i++){
		min = i;
		for(j=i+1;j<5;j++){
			if(numeros[j] < numeros[min]){
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	
	
	printf("Numeros de forma Ascendente: ");
	for(i=0;i<5;i++){
		printf(" %d ", numeros[i]);
	}
	
	printf("\nNumeros de forma Descendente: ");
	for(i=4;i>=0;i--){
		printf(" %d ", numeros[i]);
	}
	
	getch();
	return 0;
}
