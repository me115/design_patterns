///////////////////////////////////////////////////////////
//  Mediator.h
//  Implementation of the Class Mediator
//  Created on:      07-十月-2014 21:30:48
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_6E33A7CE_E410_460e_884D_607B81669C44__INCLUDED_)
#define EA_6E33A7CE_E410_460e_884D_607B81669C44__INCLUDED_

#include <string>

using namespace std;

// 注：由于两个类相互引用， 这里不能直接#include  Colleague头文件,而使用声明； 
class Colleague;

class Mediator
{

public:
	Mediator();
	virtual ~Mediator();

	virtual void operation(int nWho,string str);
	virtual void registered(int nWho, Colleague * aColleague);

};
#endif // !defined(EA_6E33A7CE_E410_460e_884D_607B81669C44__INCLUDED_)
