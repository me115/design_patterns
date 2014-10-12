///////////////////////////////////////////////////////////
//  ConcreteFactory2.cpp
//  Implementation of the Class ConcreteFactory2
//  Created on:      02-十月-2014 15:04:13
//  Original author: colin
///////////////////////////////////////////////////////////

#include "ConcreteFactory2.h"
#include "ProductA2.h"
#include "ProductB2.h"

ConcreteFactory2::ConcreteFactory2(){

}

ConcreteFactory2::~ConcreteFactory2(){

}


AbstractProductA * ConcreteFactory2::createProductA(){
	return new ProductA2();
}


AbstractProductB * ConcreteFactory2::createProductB(){
	return new ProductB2();
}

