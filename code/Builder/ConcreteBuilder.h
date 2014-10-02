///////////////////////////////////////////////////////////
//  ConcreteBuilder.h
//  Implementation of the Class ConcreteBuilder
//  Created on:      02-十月-2014 15:57:02
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_8FD38521_8504_468b_A6E5_D23DE3F1E1F1__INCLUDED_)
#define EA_8FD38521_8504_468b_A6E5_D23DE3F1E1F1__INCLUDED_

#include "Builder.h"

class ConcreteBuilder : public Builder
{

public:
	ConcreteBuilder();
	virtual ~ConcreteBuilder();

	virtual void buildPartA();
	virtual void buildPartB();
	virtual void buildPartC();

};
#endif // !defined(EA_8FD38521_8504_468b_A6E5_D23DE3F1E1F1__INCLUDED_)
