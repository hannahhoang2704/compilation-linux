#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

#define ARG_NR 4

int main(int argc, char *argv[]){
	int min, max, count;
	if(argc == ARG_NR){
		if(!is_integer(argv[1]) || !is_integer(argv[2]) || !is_integer(argv[3])){
			printf("Parameters must be a positive integer\n");
			return 1;
		}
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		count = atoi(argv[3]);

		if(!is_valid_input(min, max, count)){
			return 1;
		}else{
			int arr_random_number[count];
			srand(time(NULL));
			for(int i =0; i < count; i++){
				int new_nr;
				do{
					new_nr = random_number_generator(min, max);
					//printf("Number generated is %d\n", new_nr);
				}while(number_in_array(arr_random_number, count, new_nr));

				arr_random_number[i] = new_nr;
				printf("%d	", new_nr);
			}
			printf("\n");
		}
	}else{
		printf("Command should include parameters: %s <min> <max> <count>\n", argv[0]);
	}

	return 0;
}
