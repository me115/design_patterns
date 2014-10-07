///////////////////////////////////////////////////////////
//  UnsharedConcreteFlyweight.h
//  Implementation of the Class UnsharedConcreteFlyweight
//  Created on:      06-十月-2014 20:10:42
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_63FB0A19_070D_4a21_BCE7_CB5834C0C14D__INCLUDED_)
#define EA_63FB0A19_070D_4a21_BCE7_CB5834C0C14D__INCLUDED_

#include "Flyweight.h"

class UnsharedConcreteFlyweight : public Flyweight
{

public:
	UnsharedConcreteFlyweight();
	virtual ~UnsharedConcreteFlyweight();

	void operation();

private:
	int allState;

};
#endif // !defined(EA_63FB0A19_070D_4a21_BCE7_CB5834C0C14D__INCLUDED_)
