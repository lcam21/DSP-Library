//============================================================================
// Name        : DSP-Library.cpp
// Author      : Luis Alvarez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "header/FIR.h"

using namespace std;

int main() {
	float condicionesIniciales[2] = {0, 0};
	int filterOrder = 3;
	float coeficientes[3] = {0.33, 0.33, 0.33};
	float points[7] = {-1, 2, 4, 6, 4, 0, 0};
	int cantResult;
	float interval[2] = {-1, 6};

	FIR classFIR;

	cantResult = classFIR.AmountResults(interval);

	classFIR.DirectFormI(filterOrder, coeficientes, points, condicionesIniciales, cantResult);

	return 0;
}
