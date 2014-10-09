///////////////////////////////////////////////////////////
//  Context.h
//  Implementation of the Class Context
//  Created on:      09-十月-2014 17:20:59
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_F245CF81_2A68_4461_B039_2B901BD5A126__INCLUDED_)
#define EA_F245CF81_2A68_4461_B039_2B901BD5A126__INCLUDED_

#include "State.h"

class Context
{

public:
	Context();
	virtual ~Context();

	void changeState(State * st);
	void request();

private:
	State *m_pState;
};
#endif // !defined(EA_F245CF81_2A68_4461_B039_2B901BD5A126__INCLUDED_)
