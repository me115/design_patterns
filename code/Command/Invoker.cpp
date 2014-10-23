///////////////////////////////////////////////////////////
//  Invoker.cpp
//  Implementation of the Class Invoker
//  Created on:      07-十月-2014 17:44:02
//  Original author: colin
///////////////////////////////////////////////////////////

#include "Invoker.h"
#include <iostream>
using namespace std;

Invoker::Invoker(Command * pCommand){
	m_pCommand = pCommand;
}

Invoker::~Invoker(){

}

void Invoker::call(){
	cout << "invoker calling" << endl;
	m_pCommand->execute();
}