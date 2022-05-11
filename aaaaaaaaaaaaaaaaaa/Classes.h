#pragma once
#include <iostream>
#include <string>
using namespace std;



class Animal
{
protected:
	string nickname;
	int age;
	
public:
	Animal();
	Animal(string, int);
	virtual void sound() = 0;
	virtual void howage() = 0;
	~Animal();
};

class Dog : public Animal
{
public:
	Dog();
	Dog(string, int);
	void sound() override;
	virtual void howage() override;
	~Dog();
};

class Cat : public Animal
{
public:
	Cat();
	Cat(string, int);
	void sound() override;
	virtual void howage() override;
	~Cat();
};

class Parrot : public Animal
{
public:
	Parrot();
	Parrot(string, int);
	void sound() override;
	virtual void howage() override;
	~Parrot();
};