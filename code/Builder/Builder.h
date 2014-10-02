///////////////////////////////////////////////////////////
//  Builder.h
//  Implementation of the Class Builder
//  Created on:      02-十月-2014 15:57:02
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_938F1725_29F0_4174_93A3_D49DAB5D16A0__INCLUDED_)
#define EA_938F1725_29F0_4174_93A3_D49DAB5D16A0__INCLUDED_
#include "Product.h"

class Builder
{

public:
	Builder();
	virtual ~Builder();

	virtual void buildPartA();
	virtual void buildPartB();
	virtual void buildPartC();
	virtual Product * getResult();
protected :
	Product * m_prod;
};
#endif // !defined(EA_938F1725_29F0_4174_93A3_D49DAB5D16A0__INCLUDED_)
