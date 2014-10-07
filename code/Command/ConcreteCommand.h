///////////////////////////////////////////////////////////
//  ConcreteCommand.h
//  Implementation of the Class ConcreteCommand
//  Created on:      07-十月-2014 17:44:01
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_1AE70D53_4868_4e81_A1B8_1088DA355C23__INCLUDED_)
#define EA_1AE70D53_4868_4e81_A1B8_1088DA355C23__INCLUDED_

#include "Command.h"
#include "Receiver.h"

class ConcreteCommand : public Command
{

public:
	ConcreteCommand(Receiver * pReceiver);
	virtual ~ConcreteCommand();
	virtual void execute();
private:
	Receiver *m_pReceiver;



};
#endif // !defined(EA_1AE70D53_4868_4e81_A1B8_1088DA355C23__INCLUDED_)
