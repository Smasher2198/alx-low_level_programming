#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
int _putchar(char c);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _isNumber(char *argv);
int main(int argc, char argv[]);
void print_array(char *a, int nb);
int _atoi_digit(char x);
void *mul_array(char *a1, int len1, char a2, char *a3, int lena);

#endif
