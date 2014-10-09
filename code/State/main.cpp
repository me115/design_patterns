#include <iostream>
#include "Context.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

using namespace std;

int main(int argc, char *argv[])
{
	Context * c = new Context();
	c->request();
	c->request();
	c->request();

	delete c;
	return 0;
}
