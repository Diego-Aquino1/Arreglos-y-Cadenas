//Implementar una función que ordene los elementos de un arreglo: ascendente. Tamaño del arreglo 1000000.

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

void crearA(long long * &arrai, long long tam)
{
	ofstream f;
	f.open("Arreglo3.txt",ios::out);
	srand(time(NULL));
	arrai=new long long [tam];
	for(int i=0;i<tam;i++){
		arrai[i]=1+rand()%100;
		f<<arrai[i]<<" ";
	}
	f.close();
}

void guardarA(long long *arrai, long long tam)
{
	ofstream f;
	f.open("ArregloOrdenado.txt",ios::out);
	for(long long i=0;i<tam;i++){
		f<<arrai[i]<<" ";
	}
	f.close();
}

void quicksort(long long *lista, long long izq, long long der)
{
long long  i, j, x , aux;
i = izq;
j = der;
x = lista[ (izq + der) /2 ];
    do{
        while( (lista[i] < x) && (j <= der) ){
            i++;
        }
        while( (x < lista[j]) && (j > izq) ){
            j--;
        }
        if( i <= j ){
            aux = lista[i]; lista[i] = lista[j]; lista[j] = aux;
            i++;  j--;
        }
    }while( i <= j );

    if( izq < j )
        quicksort( lista, izq, j );
    if( i < der )
        quicksort( lista, i, der );
}

int main()
{
	long long  *L, t=1000000;
	crearA(L,t);
	cout<<"... Crear arreglo ..."<<endl;
	quicksort(L,0,t-1);
	guardarA(L,t);
	cout<<"... Arreglo Ordenado ..."<<endl;

	delete[]L;
	return 0;
}
