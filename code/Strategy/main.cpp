#include <iostream>
#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
#include "Strategy.h"
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	Strategy * s1 = new ConcreteStrategyA();
	Context * cxt = new Context();
	cxt->setStrategy(s1);
	cxt->algorithm();

	Strategy *s2 = new ConcreteStrategyB();
	cxt->setStrategy(s2);
	cxt->algorithm();
	
	delete s1;
	delete s2;
	
	int rac1 = 0x1;
	int rac2 = 0x2;
	int rac3 = 0x4;
	int rac4 = 0x8;
	
	int i = 0xe;
	int j = 0x5;

	int r1 = i & rac1;
	int r2 = i & rac2;
	int r3 = i & rac3;
	int r4 = i & rac4;
	
	cout <<"res:" << r1 << "/" << r2 << "/" << r3 << "/" << r4 << endl;
	
	return 0;
}
