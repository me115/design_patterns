///////////////////////////////////////////////////////////
//  ConcreteStrategyA.h
//  Implementation of the Class ConcreteStrategyA
//  Created on:      09-十月-2014 22:21:06
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_9B180F12_677B_4e9b_A243_1F5DAD93FE1D__INCLUDED_)
#define EA_9B180F12_677B_4e9b_A243_1F5DAD93FE1D__INCLUDED_

#include "Strategy.h"

class ConcreteStrategyA : public Strategy
{

public:
	ConcreteStrategyA();
	virtual ~ConcreteStrategyA();

	virtual void algorithm();

};
#endif // !defined(EA_9B180F12_677B_4e9b_A243_1F5DAD93FE1D__INCLUDED_)
