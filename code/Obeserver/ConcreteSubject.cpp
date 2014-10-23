///////////////////////////////////////////////////////////
//  ConcreteSubject.cpp
//  Implementation of the Class ConcreteSubject
//  Created on:      07-十月-2014 23:00:10
//  Original author: cl
///////////////////////////////////////////////////////////

#include "ConcreteSubject.h"


ConcreteSubject::ConcreteSubject(){

}

ConcreteSubject::~ConcreteSubject(){

}


int ConcreteSubject::getState(){
	return m_nState;
}


void ConcreteSubject::setState(int i){
	m_nState = i;
}
