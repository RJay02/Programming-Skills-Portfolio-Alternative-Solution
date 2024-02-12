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
	int Age;
	int Weight;
	string Noise;


	Animal(string SpeciesVal, string NameVal, string ColourVal, int AgeVal, int WeightVal, string NoiseVal) {
		Species = SpeciesVal;
		Name = NameVal;
		Colour = ColourVal;
		Age = AgeVal;
		Weight = WeightVal;
		Noise = NoiseVal;
	}

	void sayHello() {
		cout << "The animal's name is " << Name << endl;
	}

	void makeNoise() {
		cout << "The animal goes " << Noise << endl;
	}

	void eat(string food) {
		cout << "Yummy, the animal likes " << food << endl;
	}

	//void animal() {
	//	cout << "Animal has been created" << endl;
	//}


};



int main(){
	Animal Cat("British Short hair", "Milo", "Ginger", 2, 10, "meowwww");

	Cat.sayHello(); 
	Cat.makeNoise(); 
	Cat.eat("fish");

	return 0; 
}
