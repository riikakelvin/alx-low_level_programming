#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - new data type
 * @name: name of subject
 * @age: age of subject
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct creation for user-defined data types
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);

#endif
