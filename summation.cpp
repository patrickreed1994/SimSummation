#include "z80.h"
#include <iostream>

using namespace std;

unsigned int memory={};

int memoryread(unsigned int address)
{

}

int memorywrite(unsigned int address, unsigned int value)
{

}


main()
{
	Z80* z80 = new Z80();
	z80->reset();
	z80->PC=0;
}
