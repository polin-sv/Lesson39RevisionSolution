#include "logic.h"

string count_likes(int day, int like) {

	if (day <= 0 || like < 0) {
		return "Error.";
	}

	string result = "Day 1: " + to_string(like) + " likes";

	for (int i = 2; i <= day; i++) {
		int likes_per_day = i * like;

		result += "\nDay " + to_string(i) + ": "
			+ to_string(likes_per_day) + " likes";

	}

	return result;
}
