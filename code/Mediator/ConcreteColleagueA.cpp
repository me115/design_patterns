///////////////////////////////////////////////////////////
//  ConcreteColleagueA.cpp
//  Implementation of the Class ConcreteColleagueA
//  Created on:      07-十月-2014 21:30:47
//  Original author: colin
///////////////////////////////////////////////////////////

#include "ConcreteColleagueA.h"
#include <iostream>
using namespace std;

ConcreteColleagueA::ConcreteColleagueA(){
}

ConcreteColleagueA::~ConcreteColleagueA(){
}

void ConcreteColleagueA::sendmsg(int toWho,string str){
	cout << "send msg from colleagueA,to:" << toWho << endl;
	m_pMediator->operation(toWho,str);
}

void ConcreteColleagueA::receivemsg(string str){
	cout << "ConcreteColleagueA reveivemsg:" << str <<endl;
}
