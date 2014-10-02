///////////////////////////////////////////////////////////
//  AbstractFactory.h
//  Implementation of the Class AbstractFactory
//  Created on:      02-十月-2014 15:04:09
//  Original author: cl
///////////////////////////////////////////////////////////

#if !defined(EA_B48A03BA_2A60_4d85_B9EF_57DBDEEFE360__INCLUDED_)
#define EA_B48A03BA_2A60_4d85_B9EF_57DBDEEFE360__INCLUDED_
#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory
{

public:
	AbstractFactory();
	virtual ~AbstractFactory();

	virtual AbstractProductA * createProductA() = 0;
	virtual AbstractProductB * createProductB() = 0;

};
#endif // !defined(EA_B48A03BA_2A60_4d85_B9EF_57DBDEEFE360__INCLUDED_)
