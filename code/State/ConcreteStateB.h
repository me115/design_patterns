///////////////////////////////////////////////////////////
//  ConcreteStateB.h
//  Implementation of the Class ConcreteStateB
//  Created on:      09-十月-2014 17:20:59
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_A6960661_6D76_42cc_98F8_30BF46FBA4CC__INCLUDED_)
#define EA_A6960661_6D76_42cc_98F8_30BF46FBA4CC__INCLUDED_

#include "State.h"

class ConcreteStateB : public State
{

public:
	static State * Instance();
	
	virtual ~ConcreteStateB();

	virtual void handle(Context * c);
private:
	ConcreteStateB();
	static State * m_pState;
};
#endif // !defined(EA_A6960661_6D76_42cc_98F8_30BF46FBA4CC__INCLUDED_)
