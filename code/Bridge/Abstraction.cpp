///////////////////////////////////////////////////////////
//  Abstraction.cpp
//  Implementation of the Class Abstraction
//  Created on:      03-十月-2014 18:12:43
//  Original author: colin
///////////////////////////////////////////////////////////

#include "Abstraction.h"


Abstraction::Abstraction(){

}



Abstraction::~Abstraction(){
	delete m_pImp;
}





Abstraction::Abstraction(Implementor* imp){
	m_pImp = imp;
}


void Abstraction::operation(){

}