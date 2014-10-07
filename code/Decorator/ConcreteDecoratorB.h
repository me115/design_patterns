///////////////////////////////////////////////////////////
//  ConcreteDecoratorB.h
//  Implementation of the Class ConcreteDecoratorB
//  Created on:      03-十月-2014 18:53:00
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_D3774874_9201_4a73_956B_78973EC4E890__INCLUDED_)
#define EA_D3774874_9201_4a73_956B_78973EC4E890__INCLUDED_

#include "Decorator.h"
#include "Component.h"

class ConcreteDecoratorB : public Decorator
{

public:
	ConcreteDecoratorB(Component* pcmp);
	virtual ~ConcreteDecoratorB();

	void addBehavior();
	virtual void operation();

};
#endif // !defined(EA_D3774874_9201_4a73_956B_78973EC4E890__INCLUDED_)
