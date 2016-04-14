/*
 * FuntionsMath.cpp
 *
 *  Created on: Apr 13, 2016
 *      Author: luis
 */

#include "header/FuntionsMath.h"


FuntionsMath::FuntionsMath() {
	// TODO Auto-generated constructor stub

}

int Sumatoria(int pUpperLimit, int pLowerLimit, int *pInitialConditions,
			int *pCoefficients, int pDomain) {

	int result = 0;
	int posInitCond = 0;
	int condInit;
	int cont;

	for (cont = pLowerLimit; cont < pUpperLimit; pUpperLimit++) {

		posInitCond = pDomain-cont;
		condInit = 0;

		if (posInitCond >= 0){
			condInit = pInitialConditions[posInitCond];
		}

		result += pCoefficients[cont]*condInit;

	}
	return result;
}

FuntionsMath::~FuntionsMath() {
	// TODO Auto-generated destructor stub
}





