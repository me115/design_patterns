///////////////////////////////////////////////////////////
//  ConcreteObeserver.cpp
//  Implementation of the Class ConcreteObeserver
//  Created on:      07-十月-2014 23:00:09
//  Original author: cl
///////////////////////////////////////////////////////////

#include "ConcreteObeserver.h"
#include <iostream>
#include <vector>
#include "Subject.h"
using namespace std;

ConcreteObeserver::ConcreteObeserver(string name){
	m_objName = name;
}

ConcreteObeserver::~ConcreteObeserver(){

}

void ConcreteObeserver::update(Subject * sub){
	m_obeserverState = sub->getState();
	cout << "update oberserver[" << m_objName << "] state:" << m_obeserverState << endl;
}
