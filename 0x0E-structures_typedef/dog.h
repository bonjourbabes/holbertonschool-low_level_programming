#ifndef DOG_H
#define DOG_H

/**
 *struct dog - dog info
 *@name: dogs name
 *@age: dogs age
 *@owner: dogs owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
	
typedef struct dog dog_t;

#endif /* DOG_H */
