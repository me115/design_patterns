///////////////////////////////////////////////////////////
//  Colleague.h
//  Implementation of the Class Colleague
//  Created on:      07-十月-2014 21:30:47
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_216CC2D4_9FEB_466b_B7F7_B7F5199798A8__INCLUDED_)
#define EA_216CC2D4_9FEB_466b_B7F7_B7F5199798A8__INCLUDED_

#include "Mediator.h"
#include <string>
using namespace std;

class Colleague
{

public:
	Colleague();
	virtual ~Colleague();

	virtual void receivemsg(string str);
	virtual void sendmsg(int toWho,string str);
	void setMediator(Mediator * aMediator);
protected:
	Mediator * m_pMediator;

};
#endif // !defined(EA_216CC2D4_9FEB_466b_B7F7_B7F5199798A8__INCLUDED_)
