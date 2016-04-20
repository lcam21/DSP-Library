/*
 * IIR.h
 *
 *  Created on: Apr 18, 2016
 *      Author: lcalvare
 */

#ifndef HEADER_IIR_H_
#define HEADER_IIR_H_

#include "DataFilter.h"

class IIR {
public:

	/**
	 * @brief Construction of class
	 */
	IIR();

	/**
	 * @brief Method that implements the Direct Form I of a FIR Filter
	 * @param pDataFilter
	 */
	DataFilter* directFormI(DataFilter *pDataFilter);

	/**
	 * @brief Destruction of class
	 */
	virtual ~IIR();

};

#endif /* HEADER_IIR_H_ */
