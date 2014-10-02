#include <iostream>
#include "Factory.h"
#include "Product.h"

using namespace std;

int main(int argc, char *argv[])
{
	Product * prod = Factory::createProduct("A");
		
	prod->Use();
	
	delete prod;
	
	return 0;
}
