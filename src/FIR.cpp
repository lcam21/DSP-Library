/*
 * FIR.cpp
 *
 *  Created on: Apr 13, 2016
 *      Author: luis
 */

#include <iostream>
#include "header/FIR.h"
#include "header/FuntionsMath.h"

using namespace std;

FIR::FIR() {

	// TODO Auto-generated constructor stub

}

FIR::~FIR() {
	// TODO Auto-generated destructor stub
}

float* FIR::directFormI(int pFilterOrder, float *pArrayCoefficients, float *pArrayOfPoints,
		float *pArrayInitialConditions, int pNumbResults, int *pInterval){

	FuntionsMath MathOperation;
	float arrayResult[pNumbResults];
	int cont;
	float *arrayX;

	arrayX = MathOperation.ConcatenateArrays(pArrayInitialConditions, (pFilterOrder-1), pArrayOfPoints, pNumbResults);

	for (cont=0; cont<pNumbResults; cont++){

		arrayResult[cont] = MathOperation.Sumatoria(pFilterOrder, 0, pArrayCoefficients,
				arrayX, cont);
	}

	cout << "y[n]:";
	for (cont=0; cont<pNumbResults; cont++){
		cout << " " << arrayResult[cont];
	}
	cout << "" << endl;

	return arrayResult;
}



