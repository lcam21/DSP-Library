/*
 * FIR.h
 *
 *  Created on: Apr 13, 2016
 *      Author: luis
 */

#ifndef HEADER_FIR_H_
#define HEADER_FIR_H_

class FIR {
public:
	FIR();
	int* directFormI(int pFilterOrder, int *pArrayCoefficients, int *pArrayOfPoints,
			int *pArrayInitialConditions, int pNumbResults);
	virtual ~FIR();
};

#endif /* HEADER_FIR_H_ */
