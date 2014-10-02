///////////////////////////////////////////////////////////
//  ConcreteProductA.h
//  Implementation of the Class ConcreteProductA
//  Created on:      01-十月-2014 18:41:33
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_7A08FFBB_5AD4_4f9c_AE53_998AC5E88F34__INCLUDED_)
#define EA_7A08FFBB_5AD4_4f9c_AE53_998AC5E88F34__INCLUDED_

#include "Product.h"

class ConcreteProductA : public Product
{

public:
	ConcreteProductA();
	virtual ~ConcreteProductA();
	
	virtual void Use();

};
#endif // !defined(EA_7A08FFBB_5AD4_4f9c_AE53_998AC5E88F34__INCLUDED_)
