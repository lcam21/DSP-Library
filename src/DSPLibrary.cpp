//============================================================================
// Name        : DSP-Library.cpp
// Author      : Luis Alvarez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "header/FIR.h"
#include "header/IIR.h"
#include "header/DataFilter.h"

using namespace std;

int main() {

	int _FilterOrder = 2;

	double _CondicionesInicialesX[2] = { 0, 0 };
	double _CoeficientesB[3] = { 0.333, 0.333, 0.333 };
	double _EntradasX[7] = {-1, 2, 4, 6, 4, 0, 0 };

	double _CondicionesInicialesY[2] = { 0, 0 };
	double _CoeficientesA[2] = {0.666, 0.666 };

	int _IntervaloResultado[2] = {-1, 5 };

	DataFilter *_DataFilter = new DataFilter(_FilterOrder);

	_DataFilter->setArrayCoefficientsB(_CoeficientesB);
	_DataFilter->setArrayInitialConditionsX(_CondicionesInicialesX);
	_DataFilter->setArrayInputsX(_EntradasX);
	_DataFilter->setArrayIntervalOutput(_IntervaloResultado);
	_DataFilter->setArrayInitialConditionsY(_CondicionesInicialesY);
	_DataFilter->setArrayCoefficientsA(_CoeficientesA);

	//FIR _ClassFIR;
	//_ClassFIR.directFormI(_DataFilter);


	IIR _ClassIIR;
	_ClassIIR.directFormI(_DataFilter);


	return 0;
}
