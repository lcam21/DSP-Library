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

	/**
	 * @brief Destructor of class
	 */
	virtual ~DataFilter();

	/**
	 * @brief modify the array of input of add the initial conditions
	 */
	void createArrayInputX();

	/**
	 * @brief modify the array of input of add the initial conditions
	 */
	void createArrayInputY();

	/**
	 * @brief return the pointer of array that have the coefficients
	 * @return pointer double
	 */
	double* getArrayCoefficientsB() const;

	/**
	 * @brief set the value of array of coefficients
	 */
	void setArrayCoefficientsB(double* pArrayCoefficients);

	/**
	 * @brief return the pointer of array that have the initial conditions
	 * @return pointer double
	 */
	double* getArrayInitialConditionsX() const;

	/**
	 * @brief set the value of array of initial conditions
	 */
	void setArrayInitialConditionsX(double* pArrayInitialConditions);

	/**
	 * @brief return the pointer of array that have the inputs
	 * @return pointer double
	 */
	double* getArrayInputsX() const;

	/**
	 * @brief set the value of array of initial inputs
	 */
	void setArrayInputsX(double* pArrayInputs);

	/**
	 * @brief return the pointer of array that have the interval of output
	 * @return pointer double
	 */
	int* getArrayIntervalOutput() const;

	/**
	 * @brief set the value of array of interval of output
	 */
	void setArrayIntervalOutput(int* pArrayIntervalOutput);

	/**
	 * @brief return order of filter
	 * @return integer variable with contains the value of filter order
	 */
	int getFilterOrder() const;

	/**
	 * @brief set the value of filter order
	 */
	void setFilterOrder(int pFilterOrder);

	/**
	 * @brief return the pointer of array that have the array result
	 * @return pointer double
	 */
	double* getArrayResult() const;

	/**
	 * @brief set the value of array of result
	 */
	void setArrayResult(double* arrayResult);

	/**
	 * @brief return the number of output
	 * @return integer variable with contains the number of output
	 */
	int getNumbOutput() const;

	/**
	 * @brief set the value of number of output
	 */
	void setNumbOutput(int numbOutput);


private:
	//Variable generic of filter
	int FilterOrder; //Number of the order of filter

	// Variable of input data in axis X
	double *ArrayInitialConditionsX; //Array that contains the initial conditions of x[n-k]
	double *ArrayCoefficientsB; //Array that contains the coefficients b sub k
	double *ArrayInputsX; //Array that contains the inputs x[n-k]

	//Variable of input data in axis Y
	double *ArrayInitialConditionsY; //Array that contains the initial conditions of y[n-k]
	double *ArrayCoefficientsA; //Array that contains the coefficients a sub k
	double *ArrayInputsY; //Array that contains the inputs y[n-k]

	//Variable of output data in axis Y
	double *ArrayResult; //Array that contains the end result y[n]
	int *ArrayIntervalOutput; //Array that contains the interval of output
	int NumbOutput; //It get of ArrayIntervalOutput

	/**
	 * @brief funtion of get the number of output
	 * @param pArrayOfInterval double pointer array
	 */
	void numbOutput(int *pArrayOfInterval);

};

#endif /* DATAFILTER_H_ */
