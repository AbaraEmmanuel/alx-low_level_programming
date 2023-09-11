#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog's info
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the owner of the dog
 * Description: Longer stuffs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typdef for the dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
