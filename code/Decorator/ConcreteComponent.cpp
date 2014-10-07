///////////////////////////////////////////////////////////
//  ConcreteComponent.cpp
//  Implementation of the Class ConcreteComponent
//  Created on:      03-十月-2014 18:53:00
//  Original author: colin
///////////////////////////////////////////////////////////

#include "ConcreteComponent.h"
#include <iostream>
using namespace std;


ConcreteComponent::ConcreteComponent(){

}

ConcreteComponent::~ConcreteComponent(){

}

void ConcreteComponent::operation(){
	cout << "ConcreteComponent's normal operation!" << endl;
}