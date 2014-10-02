///////////////////////////////////////////////////////////
//  Factory.h
//  Implementation of the Class Factory
//  Created on:      01-十月-2014 18:41:33
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_4C08AF19_2960_47a1_B769_9B60CFA50FE0__INCLUDED_)
#define EA_4C08AF19_2960_47a1_B769_9B60CFA50FE0__INCLUDED_

#include "Product.h"
#include <string>
using namespace std;

class Factory
{

public:
	Factory();
	virtual ~Factory();

	static Product * createProduct(string proname);

};
#endif // !defined(EA_4C08AF19_2960_47a1_B769_9B60CFA50FE0__INCLUDED_)
