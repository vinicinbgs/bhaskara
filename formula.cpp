#include "formula.h"

Formula::Formula(float x, float y, float z){
	std::cout << "Fórmula de Bhaskara { ax^2 + bx + c = 0 }\n";
	a = x;
	b = y;
	c = z;
}

float Formula::delta(){
	float delta;
	delta = pow(b, 2) - 4 * a * c;
	return delta;
}

void Formula::raiz(float delta){
	float x1, x2;
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
	std::cout << "Raiz 1: " << x1 << std::endl;
	std::cout << "Raiz 2: " << x2 << std::endl;
}
