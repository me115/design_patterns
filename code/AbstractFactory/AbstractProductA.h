///////////////////////////////////////////////////////////
//  AbstractProductA.h
//  Implementation of the Class AbstractProductA
//  Created on:      02-十月-2014 15:04:14
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_A8C81D97_DDD6_4ee6_8D9A_35E6305ED449__INCLUDED_)
#define EA_A8C81D97_DDD6_4ee6_8D9A_35E6305ED449__INCLUDED_

class AbstractProductA
{

public:
	AbstractProductA();
	virtual ~AbstractProductA();

	virtual void use() = 0;

};
#endif // !defined(EA_A8C81D97_DDD6_4ee6_8D9A_35E6305ED449__INCLUDED_)
