///////////////////////////////////////////////////////////
//  ConcreteFactory2.h
//  Implementation of the Class ConcreteFactory2
//  Created on:      02-十月-2014 15:04:13
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_E8105A80_B2A3_4ec2_821E_1061C896A888__INCLUDED_)
#define EA_E8105A80_B2A3_4ec2_821E_1061C896A888__INCLUDED_

#include "AbstractFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"

class ConcreteFactory2 : public AbstractFactory
{

public:
	ConcreteFactory2();
	virtual ~ConcreteFactory2();

	virtual AbstractProductA * createProductA();
	virtual AbstractProductB * createProductB();

};
#endif // !defined(EA_E8105A80_B2A3_4ec2_821E_1061C896A888__INCLUDED_)
