///////////////////////////////////////////////////////////
//  Context.h
//  Implementation of the Class Context
//  Created on:      09-十月-2014 22:21:07
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_0DA87730_4DEE_4392_9BAF_4AC64A8A07A4__INCLUDED_)
#define EA_0DA87730_4DEE_4392_9BAF_4AC64A8A07A4__INCLUDED_

#include "Strategy.h"

class Context
{

public:
	Context();
	virtual ~Context();
	

	void algorithm();
	void setStrategy(Strategy* st);
	
private:
	Strategy *m_pStrategy;

};
#endif // !defined(EA_0DA87730_4DEE_4392_9BAF_4AC64A8A07A4__INCLUDED_)
