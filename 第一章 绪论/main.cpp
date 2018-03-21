#include <iostream>
#include "bubblesort1A.hpp"

using namespace std;
int main(int argc, char** argv) {
	int A[] = {2,1,3,7,4,5,9,0,8,6};
	for (int i = 0; i < 10; i++){
		cout << A[i];
	}
	cout << endl;
	bubblesort1A(A,10);
	for (int j = 0; j < 10; j++){
		cout << A[j];
	}
		
	
	return 0;
}
