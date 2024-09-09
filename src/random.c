#include "random.h"

int is_integer(const char *str){
	while(*str){
		//printf("%c\n", *str);
		if(!isdigit(*str)){
			return 0;
		}
		str++;
	}
	return 1;
}

int is_valid_input(int min, int max, int count){
	if(min >= max){
		printf("Minimum value should be less than maximum value\n");
		return 0;
	}
	if ((max-min +1) < count){
		printf("Too big range to get random number\n");
		return 0;
	}
	return 1;
}

int random_number_generator(int min, int max){
	int rd_nr = rand() % (max-min+1) + min;
	return rd_nr;
}

int number_in_array(int array[], int size, int nr){
	for(int i=0; i<size; i++){
		if (array[i] == nr){
			//printf("number %d in idx %d", array[i], i);
			return 1;
		}
	}
	return 0;
	}
