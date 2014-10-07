///////////////////////////////////////////////////////////
//  Abstraction.h
//  Implementation of the Class Abstraction
//  Created on:      03-十月-2014 18:12:43
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_E8BB74E1_58E2_463e_B8EE_5EC7E8E218B0__INCLUDED_)
#define EA_E8BB74E1_58E2_463e_B8EE_5EC7E8E218B0__INCLUDED_

#include "Implementor.h"

class Abstraction
{

public:
	Abstraction();
	virtual ~Abstraction();

	Abstraction(Implementor* imp);
	virtual void operation();

protected:
	Implementor* m_pImp;

};
#endif // !defined(EA_E8BB74E1_58E2_463e_B8EE_5EC7E8E218B0__INCLUDED_)
