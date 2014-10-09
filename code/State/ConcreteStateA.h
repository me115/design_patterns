///////////////////////////////////////////////////////////
//  ConcreteStateA.h
//  Implementation of the Class ConcreteStateA
//  Created on:      09-十月-2014 17:20:58
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_84158F08_E96A_4bdb_89A1_4BE2E633C3EE__INCLUDED_)
#define EA_84158F08_E96A_4bdb_89A1_4BE2E633C3EE__INCLUDED_

#include "State.h"

class ConcreteStateA : public State
{

public:
	virtual ~ConcreteStateA();
	
	static State * Instance();
	
	virtual void handle(Context * c);

private:
	ConcreteStateA();
	static State * m_pState;
};
#endif // !defined(EA_84158F08_E96A_4bdb_89A1_4BE2E633C3EE__INCLUDED_)
