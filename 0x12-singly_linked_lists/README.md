# 0x12. C - Singly linked lists
## Foundations - Low-level programming & Algorithm ― Data structures and Algorithms

### Resources
**Read or watch:**

- Linked Lists
- Google
- Youtube
- Data Structures

###Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

###General
- When and why using linked lists vs arrays
- How to build and use linked lists

###More Info
Please use this data structure for this project:

```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
```
### Tasks
**0. Print list mandatory**
- Write a function that prints all the elements of a list_t list.
**1. List length mandatory**
- Write a function that returns the number of elements in a linked list_t list.
**2. Add node mandatory**
- Write a function that adds a new node at the beginning of a list_t list.
**3. Add node at the end mandatory**
- Write a function that adds a new node at the end of a list_t list.
**4. Free list mandatory**
- Write a function that frees a list_t list.

