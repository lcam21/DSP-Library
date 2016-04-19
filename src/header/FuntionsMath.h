/*
 * FuntionsMath.h
 *
 *  Created on: Apr 13, 2016
 *      Author: luis
 */

#ifndef HEADER_FUNTIONSMATH_H_
#define HEADER_FUNTIONSMATH_H_

class FuntionsMath {
public:

	/**
	 * @brief Construction of class
	 */
	FuntionsMath();

	/**
	 * @brief Method responsible for carrying out a special sum
	 * @param pUpperLimit upper limit of the sum
	 * @param pLowerLimit lower limit of the sum
	 * @param pCoefficients array of filter coefficients
	 * @param pArray array containing the values to iterated
	 * @param pCont actual position
	 * @return variable type of float, it content the result of sum
	 */
	float sum(int pUpperLimit, int pLowerLimit, double* pCoefficients,
			double* arrayX, int pCont);

	/**
	 * @brief Method to concatenate two arrays
	 * @param pArray1 first array
	 * @param pSizeArray size first array
	 * @param pArray2 second array
	 * @param pSizeArray2 size second array
	 * @return floating pointer array
	 */
	float *concatenateArrays(double *pArray1, int pSizeArray, double *pArray2,
			int pSizeArray2);

	/**
	 * @brief Destruction of class
	 */
	virtual ~FuntionsMath();
};

#endif /* HEADER_FUNTIONSMATH_H_ */
