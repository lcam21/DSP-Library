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

	/**
	 * @brief Construction of class
	 */
	FIR();

	/**
	 * @brief Method that implements the Direct Form I of a FIR Filter
	 * @param pFilterOrder
	 * @param pArrayCoefficients
	 * @param pArrayOfPoints
	 * @param pArrayInitialConditions
	 * @param pNumbResults
	 * @param pInterval
	 */
	float* DirectFormI(int pFilterOrder, float *pArrayCoefficients, float *pArrayOfPoints,
			float *pArrayInitialConditions, int pNumbResults);

	/**
	 *
	 */
	int AmountResults(float *pArrayOfInterval);

	/**
	 * @brief Destruction of class
	 */
	virtual ~FIR();
private:

};

#endif /* HEADER_FIR_H_ */
