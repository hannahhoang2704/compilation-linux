#ifndef RANDOM_H
#define RANDOM_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_integer(const char *str);
int is_valid_input(int min, int max, int count);
int random_number_generator(int min, int max);
int number_in_array(int array[], int size, int num);

#endif
