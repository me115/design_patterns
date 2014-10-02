///////////////////////////////////////////////////////////
//  ConcreteFactory.h
//  Implementation of the Class ConcreteFactory
//  Created on:      02-十月-2014 10:18:58
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_99AEC7F3_304D_41c6_A35C_A81D7E5B280F__INCLUDED_)
#define EA_99AEC7F3_304D_41c6_A35C_A81D7E5B280F__INCLUDED_

#include "Product.h"
#include "Factory.h"

class ConcreteFactory : public Factory
{

public:
	ConcreteFactory();
	virtual ~ConcreteFactory();

	virtual Product* factoryMethod();

};
#endif // !defined(EA_99AEC7F3_304D_41c6_A35C_A81D7E5B280F__INCLUDED_)
