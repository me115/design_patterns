///////////////////////////////////////////////////////////
//  ProductB1.h
//  Implementation of the Class ProductB1
//  Created on:      02-十月-2014 15:04:19
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_CAAE93FF_EC03_413c_A931_0528F68AA18A__INCLUDED_)
#define EA_CAAE93FF_EC03_413c_A931_0528F68AA18A__INCLUDED_

#include "AbstractProductB.h"

class ProductB1 : public AbstractProductB
{

public:
	ProductB1();
	virtual ~ProductB1();

	void eat();

};
#endif // !defined(EA_CAAE93FF_EC03_413c_A931_0528F68AA18A__INCLUDED_)
