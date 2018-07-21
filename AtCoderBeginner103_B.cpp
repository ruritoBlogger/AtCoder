#include<iostream>
#include<vector>
#include <string>
#include <sstream>

std::vector<std::string> array1;
std::vector<std::string> array2;
std::stringstream ss{s};

int main() {
	std::string mozi;
	array1 = std::vector<std::string>(100);

        while (std::getline(ss, mozi)) {
          array1.push_back(mozi);
        }  

        std::size_t size = array1.size();
	array2 = std::vector<std::string>(100);
       while (std::getline(ss, mozi)) {
          array2.push_back(mozi);
        }  



	int check = 0;
	bool flag = true;
		for(int n = 0;n < size;n++) {
			if(array1[n] != array2[n]) {
				check++;
				        array1.insert(array1.begin(),array1[size]);
                                        array1.pop_back();
					flag = false;
					continue;
			}
			flag = true;
			
		}
		if(flag) {
			std::cout << "Yes" << "\n";
		}else{
			std::cout << "No" << "\n";
		}
}
