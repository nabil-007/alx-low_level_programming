#ifndef DOG_FILE
#define DOG_FILE
/**
 * struct dog - containing the name age of the puppy
 * @name: the name of the puppy
 * @age: the age of the puppy
 * @owner: the owner of the puppy
 *
 * Description:  futher description
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
