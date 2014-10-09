///////////////////////////////////////////////////////////
//  State.h
//  Implementation of the Class State
//  Created on:      09-十月-2014 17:20:59
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_8AB26F2E_677E_42cb_98AF_64B7018246A2__INCLUDED_)
#define EA_8AB26F2E_677E_42cb_98AF_64B7018246A2__INCLUDED_

class Context;

class State
{

public:
	State();
	virtual ~State();

	virtual void handle(Context * c);

};
#endif // !defined(EA_8AB26F2E_677E_42cb_98AF_64B7018246A2__INCLUDED_)
