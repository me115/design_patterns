///////////////////////////////////////////////////////////
//  ConcreteFlyweight.cpp
//  Implementation of the Class ConcreteFlyweight
//  Created on:      06-十月-2014 20:10:42
//  Original author: colin
///////////////////////////////////////////////////////////

#include "ConcreteFlyweight.h"
#include <iostream>
using namespace std;


ConcreteFlyweight::ConcreteFlyweight(string str){
	intrinsicState = str;
}

ConcreteFlyweight::~ConcreteFlyweight(){

}

void ConcreteFlyweight::operation(){
	cout << "Flyweight[" << intrinsicState << "] do operation." << endl; 
}