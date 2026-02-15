#include "logic.h"

long long get_fibo_number(int index) {
	long long first = 0;
	long long second = 1;
	long long third = 0;
	if (index <= 0) {
		return -1;
	}

	if (index == 1) {
		return 0;
	}
	if (index == 2) {
		return 1;
	}
	else {

		for (int i = 3; i <= index; i++) {
			third = first + second;
			first = second;
			second = third;
		}
	}
	return third;
}
