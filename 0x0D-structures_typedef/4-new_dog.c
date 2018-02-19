#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * len - string length
 * @x: string
 *
 * Return: length i
 */
int len(char *x)
{
int i;

i = 0;
while (x[i] != '\0')
  i++;
i++;

return (i);
}
/**
 * copy - copies strings
 * @x: string
 * @y: string
 *
 */
char *copy(char *x, char *y)
{
  int i;

  i = 0;
  while (y[i] != '\0')
    {
      x[i] = y[i];
	i++;
    }
  x[i] = '\0';
  return (x);
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char*name, float age, char *owner)
{
  dog_t *dog;
  char *a;
  char *b;

  dog = malloc(sizeof(dog_t));
  if (dog == NULL)
    return (NULL);

  a = malloc(len(name) * sizeof(char));
  if (a == NULL)
    return (NULL);
  a = copy(a ,name);
  
  b = malloc(len(owner) * sizeof(char));
  if (b == NULL)
    return (NULL);
  b = copy(b, owner);

  dog->name = name;
  dog->age = age;
  dog->owner = owner;

  return (dog);
}
