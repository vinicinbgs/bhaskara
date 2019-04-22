#include <iostream>
#include "formula.h"
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese-brazilian");
	float a, b, c;
	
	cout << "Informe o Valor de A: ";
	cin >> a;
	
	cout << "Informe o Valor de B: ";
	cin >> b;
	
	cout << "Informe o Valor de C: ";
	cin >> c;
	
	Formula *f = new Formula(a, b, c);
	float delta = f->delta();
	
	if(delta < 0){
		std::cout << "Não possui raizes reais" << std::endl;
	}else{
		f->raiz(delta);
	}
	
	system("pause");
	
	return 0;
}
