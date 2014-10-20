///////////////////////////////////////////////////////////
//  Adaptee.cpp
//  Implementation of the Class Adaptee
//  Created on:      03-十月-2014 17:32:00
//  Original author: colin
///////////////////////////////////////////////////////////

#include "Adaptee.h"
#include <iostream>
using namespace std;

Adaptee::Adaptee(){

}

Adaptee::~Adaptee(){

}

void Adaptee::specificRequest(){
	cout << "specificRequest()|this is real Request from Adaptee!" << endl;
}