#include "Array.h"

int main() 
{
	Array<int> test_array;
	Array<int> test1_array(4);

	std::cout << "Groesse test1: " << test_array.getSize() << std::endl;
	std::cout << "Groesse test2: " << test1_array.getSize() << std::endl;

	test_array.resize(10);
	std::cout << "test_array - new groesse: " << test_array.getSize() << std::endl;

	for (int i = 0; i < test1_array.getSize(); i++) {
		test1_array.set(i, 42);
		std::cout << "test1_array #" << i << " auf 42 gesetzt." << std::endl;
	}


	_getch();

	return 0;
}