#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std; 

//Creating the Animal class
class Animal {
	string Species; 
	string Name;
	string Colour; 
	string Age; 
	string Weight; 
	string Noise; 

	void sayHello() {
		cout << "The animal's name is" << Name << endl; 
	}

	void makeNoise() {
		cout << "The animal goes" << Noise << endl; 
	}

	void eat(string food) {
		cout << "Yummy, the animal likes" << food << endl; 
	}

}




int main()
{
   cout << "Hello World!\n";
}
