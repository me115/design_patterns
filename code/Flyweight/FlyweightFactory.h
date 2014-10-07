///////////////////////////////////////////////////////////
//  FlyweightFactory.h
//  Implementation of the Class FlyweightFactory
//  Created on:      06-十月-2014 20:10:42
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_C0370E5F_AC7A_4f98_8E8B_CAA37A1EE7EA__INCLUDED_)
#define EA_C0370E5F_AC7A_4f98_8E8B_CAA37A1EE7EA__INCLUDED_

#include "Flyweight.h"
#include <map>
#include <string>
using namespace std;

class FlyweightFactory
{

public:
	FlyweightFactory();
	virtual ~FlyweightFactory();

	Flyweight*  getFlyweight(string str);

private:
	map<string,Flyweight*> m_mpFlyweight;

};
#endif // !defined(EA_C0370E5F_AC7A_4f98_8E8B_CAA37A1EE7EA__INCLUDED_)
