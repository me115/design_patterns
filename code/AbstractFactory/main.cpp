#include <iostream>
#include "AbstractFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"
using namespace std;

int main(int argc, char *argv[])
{
	//Create factory1
	AbstractFactory * fc = new ConcreteFactory1();
	
	//Create products A and B from factory1
	AbstractProductA * pa =  fc->createProductA();
	AbstractProductB * pb = fc->createProductB();

	//Use products A and B from factory1
	pa->use();
	pb->eat();
	
	//Create factory2
	AbstractFactory * fc2 = new ConcreteFactory2();
	//Create products A and B from factory2
	AbstractProductA * pa2 =  fc2->createProductA();
	AbstractProductB * pb2 = fc2->createProductB();
	//Use products A and B from factory2
	pa2->use();
	pb2->eat();
	
	delete fc;
	delete pa;
	delete pb;
	delete fc2;
	delete pa2;
	delete pb2;	
	
	return 0;
}
