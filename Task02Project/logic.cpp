#include "logic.h"

string get_odd_numbers_sequence(int n, int m) {
	n = n > m ? m : n;
	m = m > n ? m : n;

	string result = "";

	for (int i = m; i >= n; i--) {
		result += i % 2 == 1 ? to_string(i) + " " : " ";
	}
	return result;
}