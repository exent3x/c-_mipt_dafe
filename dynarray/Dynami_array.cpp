#include <iostream>
#include "Dyn_array.h"

int main() {
	DynamicArr arr1, arr2(3);
	DynamicArr arr3(arr1);

	for (size_t i = 0; i < 3; ++i) {
		arr3.push_back(i);
	}
	DynamicArr arr4(arr3);
	for (size_t i = 0; i < 3; ++i) {
		std::cout << arr4[i] << std::endl;
	}
	for (size_t i = 0; i < 3; ++i) {
		std::cout << arr3[i] << std::endl;
	}
	arr1 = arr3;
	for (size_t i = 0; i < 3; ++i) {
		std::cout << arr1[i] << std::endl;
	}
	arr4[1] = 10;
	std::cout << arr4[1] << std::endl;
	return 0;
}