#include <iostream> 
#include<vector>

std::vector<int> array;

int main() {
	array = std::vector<int>(3);
	for(int line = 0;line < 3;line++) {
		std::cin >> array[line];
	}

	for(int line = 0;line < 3;line++) {
		for(int n = 0;n < 2;n++) {
			if(array[n] < array[n+1]) {
				int a = array[n];
				array[n] = array[n+1];
				array[n+1] = a;;
			}
		}
	}
	int answer;
	answer += array[0] - array[1];
	answer += array[1] - array[2];
	std::cout << answer << "\n";
}
