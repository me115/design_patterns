///////////////////////////////////////////////////////////
//  RealSubject.h
//  Implementation of the Class RealSubject
//  Created on:      07-十月-2014 16:57:54
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_5D2DD659_53C1_4a89_AFE3_762303A2AADD__INCLUDED_)
#define EA_5D2DD659_53C1_4a89_AFE3_762303A2AADD__INCLUDED_

#include "Subject.h"

class RealSubject : public Subject
{

public:
	RealSubject();
	virtual ~RealSubject();

	void request();

};
#endif // !defined(EA_5D2DD659_53C1_4a89_AFE3_762303A2AADD__INCLUDED_)
