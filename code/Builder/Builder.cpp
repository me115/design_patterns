///////////////////////////////////////////////////////////
//  Builder.cpp
//  Implementation of the Class Builder
//  Created on:      02-十月-2014 15:57:02
//  Original author: colin
///////////////////////////////////////////////////////////

#include "Builder.h"


Builder::Builder(){
	m_prod = new Product();
}



Builder::~Builder(){

}





void Builder::buildPartA(){

}


void Builder::buildPartB(){

}


void Builder::buildPartC(){

}


Product* Builder::getResult(){
	return m_prod;
}