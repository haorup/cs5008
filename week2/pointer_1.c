#include <stdio.h>

int update(int argument) {
	argument = 10;
	return argument;
}

void update2(int* argument) {
	*argument = 15;
}

int main() {
	int value = 5;
	int* p_value = &value;
	
	// using update2 function fisrt since p_value remain same
	update2(p_value);
	printf("The value using upate2 function: %d\n", value);
	
	// using update function, but there is a copy
	value = update(value);
	printf("The value using update function: %d\n", value);

	

	return 0;
}
