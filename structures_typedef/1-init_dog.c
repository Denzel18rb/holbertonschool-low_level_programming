#include <stdio.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable
 * @d: name the struct
 * @name: name the dog
 * @age: how old is the dog
 * @owner: owner the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
int main() {
	struct dog my_dog;

	init_dog(&my_dog, "Max", 3.5, "John");

	dprintf("Dog's name: %.1f\n", my_dog.name);
	dprintf("Dog's age: %.1f\n", my_dog.age);
	dprintf("Dog's owner: %.1f\n", my_dogowner);
