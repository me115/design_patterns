///////////////////////////////////////////////////////////
//  Colleague.cpp
//  Implementation of the Class Colleague
//  Created on:      07-十月-2014 21:30:47
//  Original author: colin
///////////////////////////////////////////////////////////

#include "Colleague.h"
#include "Mediator.h"
#include <iostream>
using namespace std;

Colleague::Colleague(){

}



Colleague::~Colleague(){

}

void Colleague::receivemsg(string str){
	cout << "reveivemsg:" << str <<endl;
}


void Colleague::sendmsg(int toWho,string str){

}


void Colleague::setMediator(Mediator * aMediator){
	m_pMediator = aMediator;
}