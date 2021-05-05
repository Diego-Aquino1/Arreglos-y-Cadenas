//Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo.
//Tamaño del arreglo 1000000. (Iterativa y recursiva).

#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void crearA(long long*& arrai, long long tam)
{
	srand(time(NULL));
	arrai = new long long [tam];
	for(long long i=0;i<tam;i++)
		arrai[i]=1+rand()%10;
}

long long iterativa(long long *arrai,long long tam)
{
	long long sum=0;
	for(long long i=0; i<tam; i++){
		sum+=arrai[i];
	}
	return sum;
}
/*
long long recursiva(long long *arrai, long long i, long long tam, long long sum)
{
    if(i<tam){
        recursiva(arrai, i+1, tam, sum+arrai[i]);
    }
    else{
        return sum;
    }
}
*/
long long recursiva(long long *arrai, long long i,long long f)
{
	if(i>f)
        return 0;
	if(i==f)
        return arrai[f];

	long long pri=recursiva(arrai,i+1,((i+1)+f)/2);

	long long seg=recursiva(arrai,(((i+1)+f)/2)+1,f);

	return arrai[i]+pri+seg;
}

int main()
{
	long long  *L, t=1000000;
	crearA(L,t);
	cout<<"Suma iterada: "<<iterativa(L,t)<<endl;
	//cout<<"Suma recursiva: "<<recursiva(L,0,t,0)<<endl;
	cout<<"Suma recursiva: "<<recursiva(L,0,t-1)<<endl;

	delete[]L;

	return 0;
}
