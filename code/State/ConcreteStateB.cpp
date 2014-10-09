///////////////////////////////////////////////////////////
//  ConcreteStateB.cpp
//  Implementation of the Class ConcreteStateB
//  Created on:      09-十月-2014 17:20:59
//  Original author: colin
///////////////////////////////////////////////////////////

#include "ConcreteStateB.h"
#include "ConcreteStateA.h"
#include "Context.h"
#include <iostream>
using namespace std;

State * ConcreteStateB::m_pState = NULL;
ConcreteStateB::ConcreteStateB(){

}

State * ConcreteStateB::Instance()
{
	if ( NULL == m_pState)
	{
		m_pState = new ConcreteStateB();
	}
	return m_pState;
}

ConcreteStateB::~ConcreteStateB(){

}

void ConcreteStateB::handle(Context * c){
	cout << "doing something in State B.\n done,change state to A" << endl;
	c->changeState(ConcreteStateA::Instance());
}

