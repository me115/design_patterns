///////////////////////////////////////////////////////////
//  Factory.h
//  Implementation of the Class Factory
//  Created on:      02-十月-2014 10:18:59
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_BB1E9945_CCF9_4d5c_8B7D_C3D86C0C2856__INCLUDED_)
#define EA_BB1E9945_CCF9_4d5c_8B7D_C3D86C0C2856__INCLUDED_

#include "Product.h"

class Factory
{

public:
	Factory();
	virtual ~Factory();

	virtual Product* factoryMethod();

};
#endif // !defined(EA_BB1E9945_CCF9_4d5c_8B7D_C3D86C0C2856__INCLUDED_)
