///////////////////////////////////////////////////////////
//  Command.h
//  Implementation of the Class Command
//  Created on:      07-十月-2014 17:44:01
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_DC004DA4_1FE9_4d5b_828F_6163F90CBEB9__INCLUDED_)
#define EA_DC004DA4_1FE9_4d5b_828F_6163F90CBEB9__INCLUDED_

class Command
{

public:
	Command();
	virtual ~Command();

	virtual void execute();

};
#endif // !defined(EA_DC004DA4_1FE9_4d5b_828F_6163F90CBEB9__INCLUDED_)
