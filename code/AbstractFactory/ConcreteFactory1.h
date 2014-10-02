///////////////////////////////////////////////////////////
//  ConcreteFactory1.h
//  Implementation of the Class ConcreteFactory1
//  Created on:      02-十月-2014 15:04:11
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_A1BE35BD_23B8_4607_8EE7_7BCA32867D8E__INCLUDED_)
#define EA_A1BE35BD_23B8_4607_8EE7_7BCA32867D8E__INCLUDED_

#include "AbstractFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"


class ConcreteFactory1 : public AbstractFactory
{

public:
	ConcreteFactory1();
	virtual ~ConcreteFactory1();

	virtual AbstractProductA * createProductA();
	virtual AbstractProductB * createProductB();

};
#endif // !defined(EA_A1BE35BD_23B8_4607_8EE7_7BCA32867D8E__INCLUDED_)
