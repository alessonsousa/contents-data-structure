#include <iostream>
#include <stdio.h>
using namespace std;
/*
1)
Um programa recursivo é mais elegante e menor que a sua versão
iterativa, além de exibir com maior clareza o processo utilizado, desde que
o problema ou os dados sejam naturalmente definidos através de
recorrência.
 Por outro lado, um programa recursivo exige mais espaço de memória e é,
na grande maioria dos casos, mais lento do que a versão iterativa. 

2)
void imprime(int v[], int qtde, int i)
{

    if (i < qtde)
    {
        qtde--;
        cout << v[qtde] << endl;
        imprime(v, qtde, i);
    }
}

int main()
{
    int tam = 6;
    int valores[] = {1, 2, 3, 4, 5, 6};

    imprime(valores, tam, 0);
}

3)
int potencia(int base, int expoente){
 if(expoente == 0)
 return 1;
 else
 return (base * potencia(base, expoente-1));
}
int main(){
 int base = 0, expoente = 0, total;
 cout << "\nBase: ";
 cin >> base; 
 cout << "Expoente: ";
cin >> expoente;
 total = potencia(base,expoente);
 cout << "Resultado: " << total; 
}

4)
int fibonacci (int n){
	if (n<=0){
		return 0;
	}
	else if (n == 1){
		return 1;
	}
	else {
		return fibonacci (n-1) + fibonacci (n-2);
	}
}
int main() {
	cout << "\n---------- SEQUENCIA DE FIBONACCI ----------\n\n";
	int f, fib;
	cout << "\nDigite um valor inteiro:";
	cin >> f;
	fib = fibonacci(f);
	cout << "\nO valor do numero " << f << " na sequencia de Fibonacci e: " << fib << "\n\n";
	return 0;
}
*/




