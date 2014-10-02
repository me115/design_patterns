///////////////////////////////////////////////////////////
//  Product.h
//  Implementation of the Class Product
//  Created on:      01-十月-2014 18:41:34
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_9126430A_5CDD_4424_AA90_549F255E0D2D__INCLUDED_)
#define EA_9126430A_5CDD_4424_AA90_549F255E0D2D__INCLUDED_

class Product
{

public:
	Product();
	virtual ~Product();
	
	virtual void Use() = 0;

};
#endif // !defined(EA_9126430A_5CDD_4424_AA90_549F255E0D2D__INCLUDED_)
