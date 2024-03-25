#include <iostream> // io stands for input and output 
// ^^^ that is a header file 

using namespace std; //not sexually transmitted disease

//Here is a declaration
void LOG(const char* message);
//This also works void LOG(const char*);

/* Complier knows where to find the FUNCTION declartion bc LINKER*/

int main() {
	std::cout << "Hello World, This adds a new line" << std::endl;
	std::cout << " Uses << -_- arrows... ";

	LOG("THIS IS a message to our function!");

	std::cin.get();
}

