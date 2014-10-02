///////////////////////////////////////////////////////////
//  ConcreteFactory.cpp
//  Implementation of the Class ConcreteFactory
//  Created on:      02-十月-2014 10:18:58
//  Original author: colin
///////////////////////////////////////////////////////////

#include "ConcreteFactory.h"
#include "ConcreteProduct.h"

ConcreteFactory::ConcreteFactory(){

}


ConcreteFactory::~ConcreteFactory(){

}

Product* ConcreteFactory::factoryMethod(){

	return  new ConcreteProduct();
}