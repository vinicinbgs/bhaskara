#ifndef __FORMULA_H_INCLUDED__
#define __FORMULA_H_INCLUDED__
#include <iostream>
#include <math.h>
class Formula {
	public:
		float a, b, c;
		Formula(float x, float y, float z);	
		float delta();
		void raiz(float);
};

#endif
