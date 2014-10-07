///////////////////////////////////////////////////////////
//  Decorator.cpp
//  Implementation of the Class Decorator
//  Created on:      03-十月-2014 18:53:01
//  Original author: colin
///////////////////////////////////////////////////////////

#include "Decorator.h"


Decorator::Decorator(Component* pcmp){
	m_pComponent = pcmp;
}

Decorator::~Decorator(){

}

void Decorator::operation(){
	m_pComponent->operation();
}