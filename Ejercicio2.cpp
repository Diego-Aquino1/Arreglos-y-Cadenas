//Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva). Tamaño del
//arreglo 1000000.

#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>

using namespace std;

void crearA(long long*& arrai, long long tam)
{
	srand(time(NULL));
	arrai=new long long [tam];
	for(long long i=0;i<tam;i++)
		arrai[i]=1+rand()%10;
}

void guardarA(long long *arrai, long long tam)
{
	ofstream f;
	f.open("Arreglo2.txt",ios::out);
	for(long long i=0;i<tam;i++)
		f<<arrai[i]<<" ";
	f.close();
}

void iterativa(long long *arrai, long long tam)
{
    ofstream f;
	f.open("ArregloInvertidoI.txt",ios::out);
	long long *aux;
	aux = new long long[tam];
	for(long long i=0; i<tam; i++){
		aux[i]=arrai[tam-(i+1)];
		f<<aux[i]<<" ";
	}
	f.close();
}

long long recursiva(long long *arrai, long long prim, long long seg) //Hasta 10000
{
	if(prim>=seg)return 0;
	long long aux;

	aux=arrai[prim];
	arrai[prim]=arrai[seg];
	arrai[seg]=aux;

	return recursiva(arrai,prim+1,seg-1);
}

void guardarR(long long *arrai, long long tam)
{
	ofstream f;
	f.open("ArregloInvertidoR.txt",ios::out);
	for(long long i=0;i<tam;i++)
		f<<arrai[i]<<" ";
	f.close();
}

int main()
{
	long long  *L, t=1000000;
	crearA(L,t);
	guardarA(L,t);
	cout<<"... Arreglo creado ..."<<endl;
	iterativa(L,t);
	cout<<"... Arreglo invertido (iterativa)..."<<endl;
    recursiva(L,0,t-1);
    guardarR(L,t);
	cout<<"... Arreglo invertido (recursiva)..."<<endl;
	cout<<endl;

	delete[]L;
	return 0;
}
