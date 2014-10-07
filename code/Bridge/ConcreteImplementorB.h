///////////////////////////////////////////////////////////
//  ConcreteImplementorB.h
//  Implementation of the Class ConcreteImplementorB
//  Created on:      03-十月-2014 18:12:43
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_ED81E431_10B1_41f3_A4D6_037143E5773B__INCLUDED_)
#define EA_ED81E431_10B1_41f3_A4D6_037143E5773B__INCLUDED_

#include "Implementor.h"

class ConcreteImplementorB : public Implementor
{

public:
	ConcreteImplementorB();
	virtual ~ConcreteImplementorB();

	virtual void operationImp();

};
#endif // !defined(EA_ED81E431_10B1_41f3_A4D6_037143E5773B__INCLUDED_)
