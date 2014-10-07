///////////////////////////////////////////////////////////
//  ConcreteImplementorA.h
//  Implementation of the Class ConcreteImplementorA
//  Created on:      03-十月-2014 18:12:43
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_77F5D11B_99CE_4c63_9971_9226E73FCBD1__INCLUDED_)
#define EA_77F5D11B_99CE_4c63_9971_9226E73FCBD1__INCLUDED_

#include "Implementor.h"

class ConcreteImplementorA : public Implementor
{

public:
	ConcreteImplementorA();
	virtual ~ConcreteImplementorA();

	virtual void operationImp();

};
#endif // !defined(EA_77F5D11B_99CE_4c63_9971_9226E73FCBD1__INCLUDED_)
