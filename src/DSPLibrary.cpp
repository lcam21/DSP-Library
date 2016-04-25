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

	float _CondicionesInicialesX[2] = { 0, 0 };
	float _CoeficientesB[3] = { 0.333, 0.333, 0.333 };

	float _EntradasX1[10] = { -1, 2, 4, 6, 4, 0, 0, 0, -1, 2 };
	float _EntradasX2[10] = { 8, 5, 3, -1, 7, 5, 0, 0, 0, 0 };

	float _CondicionesInicialesY[2] = { 0, 0 };
	float _CoeficientesA[2] = { 0.167, 0.167 };

	int _IntervaloResultado[2] = { -1, 14 };

	DataFilter *_DataFilter = new DataFilter(_FilterOrder);

	_DataFilter->setBuffer1(_EntradasX1);
	_DataFilter->setBuffer2(_EntradasX2);

	_DataFilter->setArrayCoefficientsB(_CoeficientesB);
	_DataFilter->setArrayInitialConditionsX(_CondicionesInicialesX);
	_DataFilter->setArrayInputsX(_EntradasX1); //Este no lo ocupo

	_DataFilter->setArrayIntervalOutput(_IntervaloResultado);

	_DataFilter->setArrayInitialConditionsY(_CondicionesInicialesY);
	_DataFilter->setArrayCoefficientsA(_CoeficientesA);

	//FIR _ClassFIR;
	//_ClassFIR.directFormI(_DataFilter);

	IIR _ClassIIR;
	_ClassIIR.directFormI(_DataFilter);

	return 0;
}
