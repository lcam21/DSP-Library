/*
 * FIR.cpp
 *
 *  Created on: Apr 13, 2016
 *      Author: luis
 */

#include "header/FIR.h"


FIR::FIR() {
	// TODO Auto-generated constructor stub

}

FIR::~FIR() {
	// TODO Auto-generated destructor stub
}

int* FIR::directFormI(int pFilterOrder, int *pArrayCoefficients, int *pArrayOfPoints,
		int *pArrayInitialConditions, int pNumbResults){

	int arrayResult[pNumbResults];
	int *result;
	int cont;

	for (cont=0; cont<pNumbResults; cont++){
		arrayResult[cont] = Sumatoria(0, pFilterOrder, pArrayInitialConditions,
				pArrayCoefficients, pArrayOfPoints[cont]);

	}

	result = arrayResult;
	return *result;
}



