///////////////////////////////////////////////////////////
//  Product.h
//  Implementation of the Class Product
//  Created on:      02-十月-2014 15:57:04
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_8B945DE2_C5A7_4959_A62A_0055346B957E__INCLUDED_)
#define EA_8B945DE2_C5A7_4959_A62A_0055346B957E__INCLUDED_
#include <iostream>
using namespace std;

class Product
{

public:
	Product();
	virtual ~Product();
	
	void setA(string str);
	void setB(string str);
	void setC(string str);
	void show();
private:
	string m_a;
	string m_b;
	string m_c;
};
#endif // !defined(EA_8B945DE2_C5A7_4959_A62A_0055346B957E__INCLUDED_)
