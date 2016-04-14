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
	int Sumatoria(int pUpperLimit, int pLowerLimit, int pInitialConditions[pUpperLimit],
			int pCoefficients[pUpperLimit], int pDomain);

	/**
	 * \brief Destruction of class
	 */
	virtual ~FuntionsMath();
};

#endif /* HEADER_FUNTIONSMATH_H_ */
