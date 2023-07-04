#include <stdio.h>
#include <string.h>

/**
 * init_dog -  initialize a variable
 * @d: name the struct
 * @name: name the dog
 * @age: how old is the dog
 * @owner: owner the dog
 */

struct dog {
	char name[50];
	float age;
	char owner[50];
};

void init_dog(struct dog *d, char *name, float age, char *owner) {
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
