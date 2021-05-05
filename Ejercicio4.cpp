//Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)

#include <iostream>
#include <string>

using namespace std;

int iterativa(char *arrai, int tam)
{
    int cont=0;
    for(int i=0; i<tam; i++)
        cont++;
    return cont;
}

int recursiva(char *arrai){
    if(*arrai =='\0')
        return 0;
    else
        return 1 + recursiva(arrai+1);
}

int main()
{
    string C;
    int t;
    char *L = new char [t];

    cout<<"Ingresefg una cadena: ";
    cin>>C;

    t = C.length();

    for (int i=0; i<sizeof(L); i++)
        L[i] = C[i];

    cout<<"Tamanio(iterativa): "<<iterativa(L,t)<<endl;
    cout<<"Tamanio(recursiva): "<<recursiva(L)<<endl;

    return 0;
}
