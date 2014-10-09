///////////////////////////////////////////////////////////
//  ConcreteStrategyB.h
//  Implementation of the Class ConcreteStrategyB
//  Created on:      09-十月-2014 22:21:07
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_10F709BE_1F23_40c5_8872_397ACB1923A4__INCLUDED_)
#define EA_10F709BE_1F23_40c5_8872_397ACB1923A4__INCLUDED_

#include "Strategy.h"

class ConcreteStrategyB : public Strategy
{

public:
	ConcreteStrategyB();
	virtual ~ConcreteStrategyB();

	virtual void algorithm();

};
#endif // !defined(EA_10F709BE_1F23_40c5_8872_397ACB1923A4__INCLUDED_)
