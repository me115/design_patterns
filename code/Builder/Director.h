///////////////////////////////////////////////////////////
//  Director.h
//  Implementation of the Class Director
//  Created on:      02-十月-2014 15:57:00
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_211CC7ED_6EAC_41b3_9A9B_BB97BCCF0D14__INCLUDED_)
#define EA_211CC7ED_6EAC_41b3_9A9B_BB97BCCF0D14__INCLUDED_

#include "Builder.h"

class Director
{

public:
	Director();
	virtual ~Director();
	Builder *m_Builder;

	Product* constuct();
	void setBuilder(Builder* buider);

private:
	Builder * m_pbuilder;

};
#endif // !defined(EA_211CC7ED_6EAC_41b3_9A9B_BB97BCCF0D14__INCLUDED_)
