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
	Animal animal;

	// Instantiating at least two objects
	Animal Cat("British Shorthair", "Milo", "Ginger", 2, 10, "meowwww");
	Animal Dog("German Shepherd", "Simba", "Black & Tan", 5, 15, "barkkk");

	Cat.sayHello(); 
	Cat.makeNoise(); 
	Cat.eat("fish");


	int choice;
	cout << "Main Menu" << endl;
	cout << "Pick an animal" << endl;
	cout << "1. Cat" << endl; 
	cout << "2. Dog" << endl; 
	cout << "Enter a number to choose an animal: ";
	cin >> choice;

	if (choice == 1){
		int choice2; 
		cout << "Sub Menu" << endl; 
		cout << "Pick an interaction" << endl; 
		cout << "1. Say Hello" << endl; 
		cout << "2. Make a noise" << endl; 
		cout << "3. View Details" << endl;
		cout << "Enter a number (1-3) to pick an interaction: "; 
		cin >> choice2; 

		if (choice2 == 1) {
			Cat.sayHello(); 
		}
		else if (choice2 == 2) {
			Cat.makeNoise(); 
		}
		else if (choice2 == 3) {
			cout << "Details for" << Cat.Name << endl; 
			cout << "Species: " << Cat.Species << endl; 
			cout << "Colour: " << Cat.Colour <<endl; 
			cout << "Age: " << Cat.Age <<endl; 
			cout << "Weight: " << Cat.Weight <<endl; 
			cout << "Noise: " << Cat.Noise <<endl; 
		}
		else {
			cout << "Invalid choice. Please try again" << endl;
		}

	}
	else if (choice == 2) {
		int choice2;
		cout << "Sub Menu" << endl;
		cout << "Pick an interaction" << endl;
		cout << "1. Say Hello" << endl;
		cout << "2. Make a noise" << endl;
		cout << "3. View Details" << endl;
		cout << "Enter a number (1-3) to pick an interaction: ";
		cin >> choice2;

		if (choice2 == 1) {
			Dog.sayHello();
		}
		else if (choice2 == 2) {
			Dog.makeNoise();
		}
		else if (choice2 == 3) {
			cout << "Details for" << Cat.Name << endl;
			cout << "Species: " << Cat.Species << endl;
			cout << "Colour: " << Cat.Colour << endl;
			cout << "Age: " << Cat.Age << endl;
			cout << "Weight: " << Cat.Weight << endl;
			cout << "Noise: " << Cat.Noise << endl;
		}
		else {
			cout << "Invalid choice. Please try again" << endl;
		}
	}
	else {
		cout << "Invalid choice. Please try again" << endl; 
	}
	return 0; 
}
