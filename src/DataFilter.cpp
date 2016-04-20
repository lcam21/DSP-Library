/*
 * DataFilter.cpp
 *
 *  Created on: Apr 17, 2016
 *      Author: luis
 */

#include <iostream>

#include "header/DataFilter.h"

using namespace std;

DataFilter::DataFilter(int pFilterOrder) {
	ArrayInitialConditionsX = new double[pFilterOrder];
	ArrayCoefficientsB = new double[pFilterOrder + 1];
	ArrayIntervalOutput = new int[2];
	ArrayInputsY = new double[pFilterOrder+1];
	setFilterOrder(pFilterOrder);
}

DataFilter::~DataFilter() {
	delete ArrayInitialConditionsX;
	delete ArrayCoefficientsB;
	delete ArrayInputsX;
	delete ArrayIntervalOutput;
	delete ArrayResult;
}

void DataFilter::createArrayInputX() { //****OJO**** Esta funcion solo funciona para b sub k

	int _Cont = 0;

	for (_Cont = NumbOutput; _Cont >= 0; _Cont--) {
		ArrayInputsX[_Cont + FilterOrder] = ArrayInputsX[_Cont];
	}

	for (_Cont = 0; _Cont < FilterOrder; _Cont++) {
		//**** Creo que aqui se deberia hacer el cambio
		// for (_Cont = 1; _Cont < FilterOrder; _Cont++) {
		// ArrayInputs[_Cont-1] = ArrayInitialConditions[_Cont];
		ArrayInputsX[_Cont] = ArrayInitialConditionsX[_Cont];
	}
}

void DataFilter::createArrayInputY() { //****OJO**** Creo q no la necesito

	int _Cont;

	for (_Cont = NumbOutput; _Cont >= 0; _Cont--) {
		ArrayInputsY[_Cont + FilterOrder] = ArrayInputsY[_Cont];
	}

	//for (_Cont = 0; _Cont < FilterOrder; _Cont++) {
	//**** Creo que aqui se deberia hacer el cambio
	for (_Cont = 1; _Cont < FilterOrder; _Cont++) {
		ArrayInputsY[_Cont - 1] = ArrayInitialConditionsY[_Cont];
		//ArrayInputsX[_Cont] = ArrayInitialConditionsX[_Cont];
	}
}

void DataFilter::moveArray() {
	int _Cont;
	for (_Cont = 0; _Cont < FilterOrder; _Cont++) {
		ArrayInputsY[_Cont] = ArrayInputsY[_Cont+1];
	}
}

double* DataFilter::getArrayResult() const {
	return ArrayResult;
}

void DataFilter::setArrayResult(double* arrayResult) {
	ArrayResult = arrayResult;
}

int DataFilter::getNumbOutput() const {
	return NumbOutput;
}

void DataFilter::setNumbOutput(int numbOutput) {
	NumbOutput = numbOutput;
}

void DataFilter::numbOutput(int *pArrayOfInterval) {
	NumbOutput = pArrayOfInterval[1] - pArrayOfInterval[0] + 1;
	//ArrayInputs = new double[NumbOutput+FilterOrder]; //OJO!!!
	ArrayResult = new double[NumbOutput];
}

double* DataFilter::getArrayCoefficientsB() const {
	return ArrayCoefficientsB;
}

void DataFilter::setArrayCoefficientsB(double* pArrayCoefficients) {
	ArrayCoefficientsB = pArrayCoefficients;
}

double* DataFilter::getArrayInitialConditionsX() const {
	return ArrayInitialConditionsX;
}

void DataFilter::setArrayInitialConditionsX(double* pArrayInitialConditions) {
	ArrayInitialConditionsX = pArrayInitialConditions;
}

double* DataFilter::getArrayInputsX() const {
	return ArrayInputsX;
}

void DataFilter::setArrayInputsX(double* pArrayInputs) {
	ArrayInputsX = pArrayInputs;
}

int* DataFilter::getArrayIntervalOutput() const {
	return ArrayIntervalOutput;
}

void DataFilter::setArrayIntervalOutput(int* pArrayIntervalOutput) {
	ArrayIntervalOutput = pArrayIntervalOutput;
	numbOutput(pArrayIntervalOutput);
}

int DataFilter::getFilterOrder() const {
	return FilterOrder;
}

void DataFilter::setFilterOrder(int pFilterOrder) {
	FilterOrder = pFilterOrder;
}

double* DataFilter::getArrayCoefficientsA() const {
	return ArrayCoefficientsA;
}

void DataFilter::setArrayCoefficientsA(double* arrayCoefficientsA) {
	ArrayCoefficientsA = arrayCoefficientsA;
}

double* DataFilter::getArrayInitialConditionsY() const {
	return ArrayInitialConditionsY;
}

void DataFilter::setArrayInitialConditionsY(double* arrayInitialConditionsY) {
	ArrayInitialConditionsY = arrayInitialConditionsY;
}

double* DataFilter::getArrayInputsY() const {
	return ArrayInputsY;
}

void DataFilter::setArrayInputsY(double* arrayInputsY) {
	ArrayInputsY = arrayInputsY;
}
