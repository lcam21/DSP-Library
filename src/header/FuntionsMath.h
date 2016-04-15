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
	 * \brief Construction of class
	 */
	FuntionsMath();

	/**
	 * \brief Class responsible of create a simple sumatoria
	 * \param pUpperLimit
	 * \param pLowerLimit
	 * \param pInitialConditions
	 * \param pCoefficients
	 * \param pDomain
	 * \return result
	 */
	float Sumatoria(int pUpperLimit, int pLowerLimit, float *pCoefficients,
			float *arrayX, int pDomain);

	float *ConcatenateArrays(float *pArray1, int pSizeArray, float *pArray2, int pSizeArray2);

	/**
	 * \brief Destruction of class
	 */
	virtual ~FuntionsMath();
};

#endif /* HEADER_FUNTIONSMATH_H_ */
