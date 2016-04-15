/*
 * FuntionsMath.cpp
 *
 *  Created on: Apr 13, 2016
 *      Author: luis
 */

#include <iostream>
#include <stdlib.h>

#include "header/FuntionsMath.h"

using namespace std;

FuntionsMath::FuntionsMath() {
	// TODO Auto-generated constructor stub
}

float FuntionsMath::Sumatoria(int pUpperLimit, int pLowerLimit, float *pCoefficients,
		float *arrayX, int pCont) {

	float result = 0; //save the result
	int posInitCond = 0; //access to
	int condInit = 0; //access to
	int cont; //cont

	for (cont = pLowerLimit; cont < pUpperLimit; cont++) {

		posInitCond = pCont+pUpperLimit-1;

		condInit = arrayX[posInitCond];

		result += pCoefficients[cont]*condInit;
		pCont--;
	}

	return result;
}

float *FuntionsMath::ConcatenateArrays(float *pArray1, int pSizeArray1, float*pArray2, int pSizeArray2){

	float *resultArray = new float[pSizeArray1+pSizeArray2];

	int cont = 0;

	for (cont=0; cont<pSizeArray1; cont++){
		resultArray[cont] = pArray1[cont];
	}

	for (cont=0; cont<pSizeArray2; cont++){
		resultArray[cont+pSizeArray1] = pArray2[cont];
	}

	return resultArray;
}

FuntionsMath::~FuntionsMath() {
	// TODO Auto-generated destructor stub
}





