///////////////////////////////////////////////////////////
//  ConcreteSubject.h
//  Implementation of the Class ConcreteSubject
//  Created on:      07-十月-2014 23:00:10
//  Original author: cl
///////////////////////////////////////////////////////////

#if !defined(EA_13122F7D_1635_4e20_ADC6_87933BB1B603__INCLUDED_)
#define EA_13122F7D_1635_4e20_ADC6_87933BB1B603__INCLUDED_

#include "Subject.h"

class ConcreteSubject : public Subject
{

public:
	ConcreteSubject();
	virtual ~ConcreteSubject();

	virtual int getState();
	virtual void setState(int i);

private:
	int m_nState;

};
#endif // !defined(EA_13122F7D_1635_4e20_ADC6_87933BB1B603__INCLUDED_)
