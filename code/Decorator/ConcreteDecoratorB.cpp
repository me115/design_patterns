///////////////////////////////////////////////////////////
//  ConcreteDecoratorB.cpp
//  Implementation of the Class ConcreteDecoratorB
//  Created on:      03-十月-2014 18:53:00
//  Original author: colin
///////////////////////////////////////////////////////////

#include "ConcreteDecoratorB.h"
#include <iostream>
using namespace std;


ConcreteDecoratorB::ConcreteDecoratorB(Component* pcmp)
:Decorator(pcmp)
{

}



ConcreteDecoratorB::~ConcreteDecoratorB(){

}





void ConcreteDecoratorB::addBehavior(){
	cout << "addBehavior BBBB" << endl;
}


void ConcreteDecoratorB::operation(){
	Decorator::operation();
	addBehavior();
}