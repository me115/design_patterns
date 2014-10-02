///////////////////////////////////////////////////////////
//  Product.cpp
//  Implementation of the Class Product
//  Created on:      02-十月-2014 15:57:04
//  Original author: colin
///////////////////////////////////////////////////////////

#include "Product.h"
#include <iostream>
using namespace std;

Product::Product(){

}



Product::~Product(){

}

void Product::setA(string str)
{
	m_a = str;
}

void Product::setB(string str)
{
	m_b = str;
}

void Product::setC(string str)
{
	m_c = str;
}

void Product::show()
{
	cout << "product has" << m_a << m_b << m_c << endl;
}