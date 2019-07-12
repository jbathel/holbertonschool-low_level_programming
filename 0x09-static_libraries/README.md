# 0x09. C - Static Libraries

## Tasks:
0. A library is not a luxury but one of the necessities of life
	* Create the static library libholberton.a containing all the functions listed below:
		1. int _putchar(char c);
		2. int _islower(int c);
		3. int _isalpha(int c);
		4. int _abs(int n);
		5. int _isupper(int c);
		6. int _isdigit(int c);
		7. int _strlen(char *s);
		8. void _puts(char *s);
		9. char *_strcpy(char *dest, char *src);
		10. int _atoi(char *s);
		11. char *_strcat(char *dest, char *src);
		12. char *_strncat(char *dest, char *src, int n);
		13. char *_strncpy(char *dest, char *src, int n);
		14. int _strcmp(char *s1, char *s2);
		15. char *_memset(char *s, char b, unsigned int n);
		16. char *_memcpy(char *dest, char *src, unsigned int n);
		17. char *_strchr(char *s, char c);
		18. unsigned int _strspn(char *s, char *accept);
		19. char *_strpbrk(char *s, char *accept);
		20. char *_strstr(char *haystack, char *needle);
1. Without libraries what have we? We have no past and no future
	* Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
2. Either write something worth reading or do something worth writing
	* Write a blog post on C static libraries. It should cover:
		a. Why use libraries
		b. How they work
		c. How to create them
		d. How to use them
	* Your posts should have examples and at least one picture, at the top. Publish your blog post on Medium or LinkedIn, and share it at least on Twitter and LinkedIn.
