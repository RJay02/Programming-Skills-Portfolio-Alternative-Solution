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

	//To output the animal name
	void sayHello() {
		cout << "Hiii, I am " << Name << endl;
	}

	//To output the animal noise 
	void makeNoise() {
		cout << Name << " goes " << Noise << endl;
	}

	//To output specified food passed 
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
	Animal Dog("German Shepherd", "Simba", "Black & Tan", 5, 15, "woof woof");

	Cat.sayHello(); 
	Cat.makeNoise(); 
	Cat.eat("fish");


	int choice;
	// Creating a simple menu to interact with animal objects
	cout << "Main Menu" << endl;
	cout << "Pick an animal" << endl;
	cout << "1. Cat" << endl; 
	cout << "2. Dog" << endl; 
	cout << "Enter a number (1-2) to choose an animal: ";
	cin >> choice;

	// If statements to show interaction menu depending on user choice 
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
			cout << "Details for the cat " << endl; 
			cout << "Species: " << Cat.Species << endl;
			cout << "Name: " << Cat.Name << endl; 
			cout << "Colour: " << Cat.Colour <<endl; 
			cout << "Age: " << Cat.Age <<endl; 
			cout << "Weight: " << Cat.Weight <<endl; 
			cout << "Noise: " << Cat.Noise <<endl; 
		}
		else {
			cout << "Invalid choice. Please try again" << endl;
		}

	} // Else If conditional statement again 
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
			cout << "Details for the dog " << endl;
			cout << "Species: " << Dog.Species << endl;
			cout << "Name: " << Dog.Name << endl; 
			cout << "Colour: " << Dog.Colour << endl;
			cout << "Age: " << Dog.Age << endl;
			cout << "Weight: " << Dog.Weight << endl;
			cout << "Noise: " << Dog.Noise << endl;
		}
		//Error handling statement
		else {
			cout << "Invalid choice. Please try again" << endl;
		}
	}
	else {
		cout << "Invalid choice. Please try again" << endl; 
	}




	// Creating another menu but this time using vectors
	vector<Animal> animals_holder = {Cat, Dog};

	int choice3;
	cout << "Main menu" << endl;
	cout << "Pick an animal" << endl;
	cout << "1. Cat" << endl; 
	cout << "2. Dog" << endl; 
	cout << "Enter a number (1-2) to choose an animal: ";
	cin >> choice3;

	// Validate the user's choice to ensure it is within the valid range
	// Without this statement I was getting an error that the vector size does 
	// not have a valid range
	if (choice3 >= 1 && choice3 <= animals_holder.size()) {
		int choice4;
		cout << "Sub Menu" << endl;
		cout << "Pick an interaction" << endl;
		cout << "1. Say Hello" << endl;
		cout << "2. Make a noise" << endl;
		cout << "3. View Details" << endl;
		cout << "Enter a number (1-3) to pick an interaction: ";
		cin >> choice4;

		// Ensure the user's interaction choice is within the valid range to avoid any errors again
		if (choice4 >= 1 && choice4 <= 3) {
			// Access the animal object at index "choice3 - 1"
			// Since user choice starts from 1 but vector indices start from 0,
			// subtract 1 from the user choice to get the correct index.
			if (choice4 == 1) {
				animals_holder[choice3 - 1].sayHello();
			}
			else if (choice4 == 2) {
				animals_holder[choice3 - 1].makeNoise();
			}
			else if (choice4 == 3) {
				cout << "Details for the animal " << endl;
				cout << "Species: " << animals_holder[choice3 - 1].Species << endl;
				cout << "Name: " << animals_holder[choice3 - 1].Name << endl;
				cout << "Colour: " << animals_holder[choice3 - 1].Colour << endl;
				cout << "Age: " << animals_holder[choice3 - 1].Age << endl;
				cout << "Weight: " << animals_holder[choice3 - 1].Weight << endl;
				cout << "Noise: " << animals_holder[choice3 - 1].Noise << endl;
			}
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

