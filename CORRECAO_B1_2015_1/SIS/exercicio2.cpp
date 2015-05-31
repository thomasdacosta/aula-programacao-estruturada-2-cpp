#include <iostream>
#include <limits>

using namespace std;

int main()
{
	int value;
	
	for (;;) {
	    cout << "Por favor digite um valor: ";
	    if (cin >> value) {
	        break;
	    } else {
	        cout << "Por favor digite um numero inteiro" << endl;
	        cin.clear();
	        cin.ignore(numeric_limits<streamsize>::max(), '\n');
	    }
	}	
}
