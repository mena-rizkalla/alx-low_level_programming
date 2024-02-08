
#include "search_algos.h"
#include <math.h>



int jump_search(int *array, size_t size, int value){


	int jump = (int)sqrt((double)size);

	int b = 0;
	while(array[jump] < value){

		b= jump;

		jump+=jump;
		
		if(jump >= size)
			break;

		if(array[jump] > value){
			break;
		}
	}

	while(array[b] < value){
	
	
		b++;
	

	}

	return b;

}
