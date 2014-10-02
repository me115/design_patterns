///////////////////////////////////////////////////////////
//  ProductA1.h
//  Implementation of the Class ProductA1
//  Created on:      02-十月-2014 15:04:16
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_A2B201B2_C47D_41bd_9B53_C404C047CB78__INCLUDED_)
#define EA_A2B201B2_C47D_41bd_9B53_C404C047CB78__INCLUDED_

#include "AbstractProductA.h"

class ProductA1 : public AbstractProductA
{

public:
	ProductA1();
	virtual ~ProductA1();

	void use();

};
#endif // !defined(EA_A2B201B2_C47D_41bd_9B53_C404C047CB78__INCLUDED_)
