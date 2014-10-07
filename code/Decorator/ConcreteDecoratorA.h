///////////////////////////////////////////////////////////
//  ConcreteDecoratorA.h
//  Implementation of the Class ConcreteDecoratorA
//  Created on:      03-十月-2014 18:53:00
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_6786B68E_DCE4_44c4_B26D_812F0B3C0382__INCLUDED_)
#define EA_6786B68E_DCE4_44c4_B26D_812F0B3C0382__INCLUDED_

#include "Decorator.h"
#include "Component.h"

class ConcreteDecoratorA : public Decorator
{

public:
	ConcreteDecoratorA(Component* pcmp);
	virtual ~ConcreteDecoratorA();

	void addBehavior();
	virtual void operation();

};
#endif // !defined(EA_6786B68E_DCE4_44c4_B26D_812F0B3C0382__INCLUDED_)
