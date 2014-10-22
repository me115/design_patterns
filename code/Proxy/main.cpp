#include <iostream>
#include "RealSubject.h"
#include "Proxy.h"

using namespace std;

int main(int argc, char *argv[])
{
	Proxy proxy;
	proxy.request();
	
	return 0;
}
