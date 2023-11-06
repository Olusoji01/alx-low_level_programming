#ifndef dog_h
#define dog_h
/**
 * struct dog - a new type describing dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: the owner of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
