#include <iostream>
#include "parsing.h"

using namespace std;

int main() {
	string input;
	while(true){
		cout << ">>> ";
		getline(cin,input);

		if(input == "quit") break;

		exec(input);
	}
	return 0;
}