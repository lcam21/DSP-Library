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
	ArrayInitialConditions = new double[pFilterOrder];
	ArrayCoefficients = new double[pFilterOrder + 1];
	ArrayIntervalOutput = new int[2];
	setFilterOrder(pFilterOrder);
}

DataFilter::~DataFilter() {
	delete ArrayInitialConditions;
	delete ArrayCoefficients;
	delete ArrayInputs;
	delete ArrayIntervalOutput;
	delete ArrayResult;
}

void DataFilter::createArrayInput(){

	int _Cont = 0;

	for (_Cont = NumbOutput; _Cont >= 0; _Cont--) {
		ArrayInputs[_Cont + FilterOrder] = ArrayInputs[_Cont];
	}

	for (_Cont = 0; _Cont < FilterOrder; _Cont++) {
		ArrayInputs[_Cont] = ArrayInitialConditions[_Cont];
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

double* DataFilter::getArrayCoefficients() const {
	return ArrayCoefficients;
}

void DataFilter::setArrayCoefficients(double* pArrayCoefficients) {
	ArrayCoefficients = pArrayCoefficients;
}

double* DataFilter::getArrayInitialConditions() const {
	return ArrayInitialConditions;
}

void DataFilter::setArrayInitialConditions(double* pArrayInitialConditions) {
	ArrayInitialConditions = pArrayInitialConditions;
}

double* DataFilter::getArrayInputs() const {
	return ArrayInputs;
}

void DataFilter::setArrayInputs(double* pArrayInputs) {
	ArrayInputs = pArrayInputs;
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
