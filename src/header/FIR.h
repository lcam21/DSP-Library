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
	float* directFormI(int pFilterOrder, float *pArrayCoefficients, float *pArrayOfPoints,
			float *pArrayInitialConditions, int pNumbResults, int *pInterval);
	virtual ~FIR();
private:

};

#endif /* HEADER_FIR_H_ */
