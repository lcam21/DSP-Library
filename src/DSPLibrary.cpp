//============================================================================
// Name        : DSP-Library.cpp
// Author      : Luis Alvarez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "header/FIR.h"
#include "header/DataFilter.h"

using namespace std;

int main() {

	int _FilterOrder = 2;
	double _CondicionesIniciales[2] = { 0, 0 };
	double _Coeficientes[3] = { 0.33, 0.33, 0.33 };
	double _EntradasX[7] = {-1, 2, 4, 6, 4, 0, 0 };
	int _IntervaloResultado[2] = {-1, 5 };
	int _CantResult;

	FIR _ClassFIR;

	DataFilter *_DataFilter = new DataFilter(_FilterOrder);

	_DataFilter->setArrayCoefficientsB(_Coeficientes);
	_DataFilter->setArrayInitialConditionsX(_CondicionesIniciales);
	_DataFilter->setArrayInputsX(_EntradasX);
	_DataFilter->setArrayIntervalOutput(_IntervaloResultado);

	_ClassFIR.directFormI(_DataFilter);

	return 0;
}
