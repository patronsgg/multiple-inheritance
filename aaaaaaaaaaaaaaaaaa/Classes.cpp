#include "Classes.h"

Animal::Animal(string nickname_in, int age_in)
{
	nickname = nickname_in;
	age = age_in;
}

Animal::Animal() {};

Animal::~Animal() {};

Dog::Dog(string nickname_in, int age_in) : Animal(nickname_in, age_in){}

Dog::Dog() {};

Dog::~Dog() {};

void Dog::sound()
{
	cout << "woof"<< endl;
}

void Dog::howage()
{
	if (age < 3) cout << "The " << this->nickname << " is young " << endl;
	else if (age >= 3 && age < 8) cout << "A middle-aged " << this->nickname << endl;
	else if (age >= 8) cout << "The " << this->nickname << " is old " << endl;
}

Cat::Cat(string nickname_in, int age_in) :Animal(nickname_in, age_in){}

Cat::Cat() {};

Cat::~Cat() {};

void Cat::sound()
{
	cout << "meow" << endl;
}

void Cat::howage()
{
	if (age < 4) cout << "The " << this->nickname << " is young " << endl;
	else if (age >= 4 && age < 9) cout << "A middle-aged " << this->nickname << endl;
	else if (age >= 9) cout << "The " << this->nickname << " is old " << endl;
}

Parrot::Parrot(string nickname_in, int age_in) :Animal(nickname_in, age_in) {}

Parrot::Parrot() {};

Parrot::~Parrot() {};

void Parrot::sound()
{
	cout << "chirp" << endl;
}

void Parrot::howage()
{
	if (age < 2) cout << "The " << this->nickname << " is young " << endl;
	else if (age >= 2 && age < 6) cout << "A middle-aged " << this->nickname << endl;
	else if (age >= 6) cout << "The " << this->nickname << " is old " << endl;
}
