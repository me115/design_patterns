///////////////////////////////////////////////////////////
//  ConcreteFactory1.cpp
//  Implementation of the Class ConcreteFactory1
//  Created on:      02-十月-2014 15:04:11
//  Original author: colin
///////////////////////////////////////////////////////////

#include "ConcreteFactory1.h"
#include "ProductA1.h"
#include "ProductB1.h"


ConcreteFactory1::ConcreteFactory1(){

}

ConcreteFactory1::~ConcreteFactory1(){

}

AbstractProductA * ConcreteFactory1::createProductA(){
	return new ProductA1();
}


AbstractProductB * ConcreteFactory1::createProductB(){
	return new ProductB1();
}