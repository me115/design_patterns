///////////////////////////////////////////////////////////
//  Strategy.h
//  Implementation of the Class Strategy
//  Created on:      09-十月-2014 22:21:07
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_ADAF8456_60CF_4627_A2BE_C1A13D046954__INCLUDED_)
#define EA_ADAF8456_60CF_4627_A2BE_C1A13D046954__INCLUDED_

class Strategy
{

public:
	Strategy();
	virtual ~Strategy();

	virtual void algorithm();

};
#endif // !defined(EA_ADAF8456_60CF_4627_A2BE_C1A13D046954__INCLUDED_)
