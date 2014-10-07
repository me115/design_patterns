///////////////////////////////////////////////////////////
//  ConcreteColleagueB.cpp
//  Implementation of the Class ConcreteColleagueB
//  Created on:      07-十月-2014 21:30:47
//  Original author: colin
///////////////////////////////////////////////////////////

#include "ConcreteColleagueB.h"
#include <iostream>
using namespace std;


ConcreteColleagueB::ConcreteColleagueB(){

}



ConcreteColleagueB::~ConcreteColleagueB(){

}

void ConcreteColleagueB::sendmsg(int toWho,string str){
	cout << "send msg from colleagueB,to:" << toWho << endl;
	m_pMediator->operation(toWho,str);
}

void ConcreteColleagueB::receivemsg(string str){
	cout << "ConcreteColleagueB reveivemsg:" << str <<endl;
}

