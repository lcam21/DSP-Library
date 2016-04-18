/*
 * DataFilter.h
 *
 *  Created on: Apr 17, 2016
 *      Author: luis
 */

#ifndef DATAFILTER_H_
#define DATAFILTER_H_

class DataFilter {
public:

	/**
	 * @brief Constructor of class
	 * @param pFilterOrder number of filter order
	 */
	DataFilter(int pFilterOrder);

	virtual ~DataFilter();

	void createArrayInput();

	double* getArrayCoefficients() const;

	void setArrayCoefficients(double* pArrayCoefficients);

	double* getArrayInitialConditions() const;

	void setArrayInitialConditions(double* pArrayInitialConditions);

	double* getArrayInputs() const;

	void setArrayInputs(double* pArrayInputs);

	int* getArrayIntervalOutput() const;

	void setArrayIntervalOutput(int* pArrayIntervalOutput);

	int getFilterOrder() const;

	void setFilterOrder(int pFilterOrder);

	double* getArrayResult() const;

	void setArrayResult(double* arrayResult);

	int getNumbOutput() const;

	void setNumbOutput(int numbOutput);


private:
	double *ArrayInitialConditions; //Array that contains the initial conditions
	double *ArrayCoefficients; //Array that contains the coefficients
	double *ArrayInputs; //Array that contains the inputs x[n]
	double *ArrayResult; //Array that contains the end result y[n]
	int *ArrayIntervalOutput; //Array that contains the interval of output
	int FilterOrder;
	int NumbOutput; //get of ArrayIntervalOutput

	/**
	 * @brief funtion of get the number of output
	 * @param pArrayOfInterval double pointer array
	 */
	void numbOutput(int *pArrayOfInterval);

};

#endif /* DATAFILTER_H_ */
