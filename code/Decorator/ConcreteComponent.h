///////////////////////////////////////////////////////////
//  ConcreteComponent.h
//  Implementation of the Class ConcreteComponent
//  Created on:      03-十月-2014 18:53:00
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_A20435BD_1DDE_439d_83AB_73AA7DAD469E__INCLUDED_)
#define EA_A20435BD_1DDE_439d_83AB_73AA7DAD469E__INCLUDED_

#include "Component.h"

class ConcreteComponent : public Component
{

public:
	ConcreteComponent();
	virtual ~ConcreteComponent();

	void operation();

};
#endif // !defined(EA_A20435BD_1DDE_439d_83AB_73AA7DAD469E__INCLUDED_)
