/*
 * FuntionsMath.cpp
 *
 *  Created on: Apr 13, 2016
 *      Author: luis
 */

#include <iostream>

#include "header/FuntionsMath.h"

using namespace std;

FuntionsMath::FuntionsMath() {
	// TODO Auto-generated constructor stub
}

double FuntionsMath::sum(int pUpperLimit, int pLowerLimit, double* pCoefficients,
		double* pArray, int pCont) {

	double _Result = 0; //save the result
	int _PosInitCond = 0; //access to
	int _Cont; //cont

	for (_Cont = pLowerLimit; _Cont <= pUpperLimit; _Cont++) {

		_PosInitCond = pCont + pUpperLimit;
		_Result += pCoefficients[_Cont] * pArray[_PosInitCond];

		cout << "b-a[" << _Cont << "]: " << pCoefficients[_Cont] << " * ";
		cout << "x-y[" << _PosInitCond << "]: " << pArray[_PosInitCond];
		cout << " = " << _Result << endl;

		pCont--;
	}

	//cout << "y[n]: " << result << endl << endl;
	return _Result;
}

double *FuntionsMath::concatenateArrays(double *pArray1, int pSizeArray1,
		double*pArray2, int pSizeArray2) {

	double *_ResultArray = new double[pSizeArray1 + pSizeArray2];

	int _Cont = 0;

	for (_Cont = 0; _Cont < pSizeArray1; _Cont++) {
		_ResultArray[_Cont] = pArray1[_Cont];
	}

	for (_Cont = 0; _Cont < pSizeArray2; _Cont++) {
		_ResultArray[_Cont + pSizeArray1] = pArray2[_Cont];
	}

	return _ResultArray;
}

FuntionsMath::~FuntionsMath() {
	// TODO Auto-generated destructor stub
}

