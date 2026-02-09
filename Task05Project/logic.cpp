#include "logic.h"

bool is_digits_count_even(long long number){
	number = number < 0 ? -number : number;
	int count = 0;

	while (number > 0) {
		number /= 10;
		count++;
	}

	if (count != 0 && count % 2 == 0) {
		return true;
	}

	return false;
}