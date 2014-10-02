///////////////////////////////////////////////////////////
//  ConcreteProduct.h
//  Implementation of the Class ConcreteProduct
//  Created on:      02-十月-2014 10:18:58
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_EF9F81B2_79BC_4b45_BB45_60E30EE545C4__INCLUDED_)
#define EA_EF9F81B2_79BC_4b45_BB45_60E30EE545C4__INCLUDED_

#include "Product.h"

class ConcreteProduct : public Product
{

public:
	ConcreteProduct();
	virtual ~ConcreteProduct();

	virtual void use();

};
#endif // !defined(EA_EF9F81B2_79BC_4b45_BB45_60E30EE545C4__INCLUDED_)
