///////////////////////////////////////////////////////////
//  ConcreteColleagueB.h
//  Implementation of the Class ConcreteColleagueB
//  Created on:      07-十月-2014 21:30:47
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_BA6AA11F_3B6A_40dc_A37E_9B226AE90491__INCLUDED_)
#define EA_BA6AA11F_3B6A_40dc_A37E_9B226AE90491__INCLUDED_

#include "Colleague.h"

class ConcreteColleagueB : public Colleague
{

public:
	ConcreteColleagueB();
	virtual ~ConcreteColleagueB();

	virtual void sendmsg(int toWho,string str);
	virtual void receivemsg(string str);
};
#endif // !defined(EA_BA6AA11F_3B6A_40dc_A37E_9B226AE90491__INCLUDED_)
