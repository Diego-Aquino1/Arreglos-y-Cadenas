//Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.
//(asuma que la cadena b tiene el tamaño suficiente para contener los elementos de a).

#include <iostream>

using namespace std;

/*
void concadenar(char *cadA,char *cadB)
{
	int tam;
	for(tam=0; *(cadB+tam)!='\0'; tam++);
	int ind=0;
	while(*(cadA+ind)!='\0'){
		*(cadB+tam+ind)=*(cadA+ind);
		ind++;
	}
	*(cadB+tam+ind)='\0';
}*/

int main()
{
    string S1,S2;

    cout<<"String a: ";
	cin>>S1;
	cout<<"String b: ";
	cin>>S2;

    S1=S1+S2;

	cout<<"A: "<<S1<<endl;
	cout<<"B: "<<S2<<endl;

	/*
	char *S1 = new char[100];
	char *S2 = new char[100];

	cout<<"String a: ";
	cin>>S1;
	cout<<"String b: ";
	cin>>S2;

	concadenar(S1,S2);

	cout<<"A: "<<S1<<endl;
	cout<<"B: "<<S2<<endl;
*/
	return 0;
}

