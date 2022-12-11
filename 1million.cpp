#include <iostream>
using namespace std;

int main(void){
	int var1 = 1;
	while (var1 < 10000000){
		var1 = var1+1;
		if (var1 == 10000000){
			std::cout << "Time Used:" << endl;
			break;
		}
	}
}
