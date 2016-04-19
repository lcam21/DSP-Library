/*
 * IIR.cpp
 *
 *  Created on: Apr 18, 2016
 *      Author: lcalvare
 */

#include "header/IIR.h"

IIR::IIR() {
	// TODO Auto-generated constructor stub

}

IIR::~IIR() {
	// TODO Auto-generated destructor stub
}

DataFilter* IIR::directFormI(DataFilter *pDataFilter) {

	FuntionsMath _MathOperation;

	pDataFilter->createArrayInputX();
	pDataFilter->createArrayInputY(); //CREO Q NO DEBE SER ASI!!

	//ANALIZAR COMO VAN VARIANDO LAS y[n-k] EN EL TIEMPO Y LA FORMA ADECUADA DE IRLAS MOVIENDO

	int _Cont;
	int _FilterOrder = pDataFilter->getFilterOrder();
	int _NumbOutput = pDataFilter->getNumbOutput();

	double *_ArrayResultX;
	double *_ArrayCoefficientsB = pDataFilter->getArrayCoefficientsB();
	double *_ArrayInputsX = pDataFilter->getArrayInputsX();

	double *_ArrayResultY;
	double *_ArrayCoefficientsA = pDataFilter->getArrayCoefficientsA();
	double *_ArrayInputsY = pDataFilter->getArrayInputsY();

	double *_ArrayResult = pDataFilter->getArrayResult();

	// Se pueden hacer dos for y paralelizar
	for (_Cont = 0; _Cont < _NumbOutput; _Cont++) {
		_ArrayResultX[_Cont] = _MathOperation.sum(_FilterOrder, 0,
				_ArrayCoefficientsB, _ArrayInputsX, _Cont);

		//FALTA CALCULAR LA SUMATORIA DE A*Y
		//FALTA TOMAR EN CUENTA LAS y[n] ANTERIORES
		_ArrayResultY[_Cont] = _MathOperation.sum(_FilterOrder, 1,
				_ArrayCoefficientsA, _ArrayInputsY, _Cont);



		_ArrayResult[_Cont] = _ArrayResultX[_Cont] - _ArrayResultY[_Cont];
	}

	cout << "y[n]:";
	for (_Cont = 0; _Cont < _NumbOutput; _Cont++) {
		cout << " " << _ArrayResult[_Cont];
	}
	cout << "" << endl;

	return pDataFilter;
}
