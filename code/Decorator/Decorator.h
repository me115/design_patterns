///////////////////////////////////////////////////////////
//  Decorator.h
//  Implementation of the Class Decorator
//  Created on:      03-十月-2014 18:53:00
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_1B4529AE_AF10_4b83_B1D5_40C798AFFAAA__INCLUDED_)
#define EA_1B4529AE_AF10_4b83_B1D5_40C798AFFAAA__INCLUDED_

#include "Component.h"

class Decorator : public Component
{

public:
	Decorator(Component* pcmp);
	virtual ~Decorator();

	void operation();
	
private:
	Component * m_pComponent;

};
#endif // !defined(EA_1B4529AE_AF10_4b83_B1D5_40C798AFFAAA__INCLUDED_)
