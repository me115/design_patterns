///////////////////////////////////////////////////////////
//  ConcreteDecoratorA.cpp
//  Implementation of the Class ConcreteDecoratorA
//  Created on:      03-十月-2014 18:53:00
//  Original author: colin
///////////////////////////////////////////////////////////

#include "ConcreteDecoratorA.h"
#include <iostream>
using namespace std;

ConcreteDecoratorA::ConcreteDecoratorA(Component* pcmp)
:Decorator(pcmp)
{

}

ConcreteDecoratorA::~ConcreteDecoratorA(){

}

void ConcreteDecoratorA::addBehavior(){
	cout << "addBehavior AAAA" << endl;
}


void ConcreteDecoratorA::operation(){
	Decorator::operation();
	addBehavior();
}