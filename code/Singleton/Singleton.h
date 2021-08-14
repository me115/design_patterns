///////////////////////////////////////////////////////////
//  Singleton.h
//  Implementation of the Class Singleton
//  Created on:      02-十月-2014 17:24:46
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_5A12F734_0177_4e67_9117_77C147875E5A__INCLUDED_)
#define EA_5A12F734_0177_4e67_9117_77C147875E5A__INCLUDED_

class Singleton
{

public:
	virtual ~Singleton();
	Singleton *m_Singleton;

	//Entry point to method is static and public
	static Singleton* getInstance();

	//This function represents the actual operation performed over the object
	void singletonOperation();

private:
	static Singleton * instance;

	//Constructor shall be declared as private
	Singleton();

};
#endif // !defined(EA_5A12F734_0177_4e67_9117_77C147875E5A__INCLUDED_)
