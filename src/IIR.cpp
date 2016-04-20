/*
 * IIR.cpp
 *
 *  Created on: Apr 18, 2016
 *      Author: lcalvare
 */

#include <iostream>
#include "header/IIR.h"
#include "header/FuntionsMath.h"

using namespace std;

IIR::IIR() {
	// TODO Auto-generated constructor stub

}

IIR::~IIR() {
	// TODO Auto-generated destructor stub
}

DataFilter* IIR::directFormI(DataFilter *pDataFilter) {

	FuntionsMath _MathOperation;

	pDataFilter->createArrayInputX();
	//pDataFilter->createArrayInputY(); //CREO Q NO se ocupa

	int _Cont;
	int _FilterOrder = pDataFilter->getFilterOrder();
	int _NumbOutput = pDataFilter->getNumbOutput();

	double *_ArrayResultX = new double [_NumbOutput];
	double *_ArrayCoefficientsB = pDataFilter->getArrayCoefficientsB();
	double *_ArrayInputsX = pDataFilter->getArrayInputsX();

	double _ArrayResultY;
	double *_ArrayCoefficientsA = pDataFilter->getArrayCoefficientsA();
	double *_ArrayInputsY = pDataFilter->getArrayInputsY();

	double *_ArrayResult = pDataFilter->getArrayResult();

	// Se pueden hacer dos for y paralelizar
	for (_Cont = 0; _Cont < _NumbOutput; _Cont++) {
		_ArrayResultX[_Cont] = _MathOperation.sum(_FilterOrder, 0,
				_ArrayCoefficientsB, _ArrayInputsX, _Cont);

		cout << "Inicio" << endl;
		_ArrayResultY = _MathOperation.sum(_FilterOrder-1, 0,
				_ArrayCoefficientsA, _ArrayInputsY, 0);
		cout << "Final" << endl;

		_ArrayResult[_Cont] = _ArrayResultX[_Cont] - _ArrayResultY;
		_ArrayInputsY[_FilterOrder] = _ArrayResult[_Cont];
		cout << "y[n]: " << _ArrayResult[_Cont] << endl;

		pDataFilter->moveArray();
	}

	cout << "y[n]:";
	for (_Cont = 0; _Cont < _NumbOutput; _Cont++) {
		cout << " " << _ArrayResult[_Cont];
	}
	cout << "" << endl;

	return pDataFilter;
}
