#include "logic.h"

string count_likes(int day, int like) {

	if (day <= 0 || like < 0) {
		return "Error.";
	}

	string result;

	for (int i = 1; i <= day; i++) {
		int likes_per_day = i * like;
		result += "Day " + to_string(i) + ": "
			+ to_string(likes_per_day) + " likes\n";

	}

	return result;
}
