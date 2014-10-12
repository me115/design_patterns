///////////////////////////////////////////////////////////
//  Director.cpp
//  Implementation of the Class Director
//  Created on:      02-十月-2014 15:57:01
//  Original author: colin
///////////////////////////////////////////////////////////

#include "Director.h"

Director::Director(){
}

Director::~Director(){
}

Product* Director::constuct(){
	m_pbuilder->buildPartA();
	m_pbuilder->buildPartB();
	m_pbuilder->buildPartC();
	
	return m_pbuilder->getResult();
}


void Director::setBuilder(Builder* buider){
	m_pbuilder = buider;
}