///////////////////////////////////////////////////////////
//  ConcreteObeserver.h
//  Implementation of the Class ConcreteObeserver
//  Created on:      07-十月-2014 23:00:09
//  Original author: cl
///////////////////////////////////////////////////////////

#if !defined(EA_7B020534_BFEA_4c9e_8E4C_34DCE001E9B1__INCLUDED_)
#define EA_7B020534_BFEA_4c9e_8E4C_34DCE001E9B1__INCLUDED_

#include "Obeserver.h"
#include "ConcreteSubject.h"

class ConcreteObeserver : public Obeserver
{

public:
	ConcreteObeserver();
	virtual ~ConcreteObeserver();
	ConcreteSubject *m_ConcreteSubject;

	void update();

private:
	int obeserverState;

};
#endif // !defined(EA_7B020534_BFEA_4c9e_8E4C_34DCE001E9B1__INCLUDED_)
