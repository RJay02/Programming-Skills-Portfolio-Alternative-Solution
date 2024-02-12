#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std; 

//Creating the Animal class
class Animal {
public:
	string Species;
	string Name;
	string Colour;
	int Age;
	int Weight;
	string Noise;


	void sayHello() {
		cout << "Hiii, I am " << Name << endl;
	}

	void makeNoise() {
		cout << Name << " goes " << Noise << endl;
	}

	void eat(string food) {
		cout << "Yummy, " << Name <<  " likes " << food << endl;
	}

	//Default constructor to display the required message
	Animal() {
		cout << "Animal has been created" << endl;
	}

	// Parameterised Constructor to set the value of each data members
	Animal(string SpeciesVal, string NameVal, string ColourVal, int AgeVal, int WeightVal, string NoiseVal) {
		Species = SpeciesVal;
		Name = NameVal;
		Colour = ColourVal;
		Age = AgeVal;
		Weight = WeightVal;
		Noise = NoiseVal;
	}


};



int main(){
	Animal;

	Animal Cat("British Short hair", "Milo", "Ginger", 2, 10, "meowwww");

	Cat.sayHello(); 
	Cat.makeNoise(); 
	Cat.eat("fish");

	return 0; 
}
