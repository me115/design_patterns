///////////////////////////////////////////////////////////
//  ConcreteCommand.cpp
//  Implementation of the Class ConcreteCommand
//  Created on:      07-十月-2014 17:44:02
//  Original author: colin
///////////////////////////////////////////////////////////

#include "ConcreteCommand.h"
#include <iostream>
using namespace std;


ConcreteCommand::ConcreteCommand(Receiver *pReceiver){
	m_pReceiver = pReceiver;
}



ConcreteCommand::~ConcreteCommand(){

}

void ConcreteCommand::execute(){
	cout << "ConcreteCommand::execute"  << endl;
	m_pReceiver->action();
}