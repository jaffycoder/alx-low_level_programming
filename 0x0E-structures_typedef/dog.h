#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - initializes a variable of type structure dog.
 * @d: pointer to the struct dog toget initialized
 * @name: name to be initialize
 * @age: age to be initailized
 * @owner: owner to be initialized
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for a dog structure
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
