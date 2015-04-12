#include <iostream>
#include <limits>

using namespace std;

int main()
{
	int value;
	
	for (;;) {
	    cout << "Please enter in your taxable income: ";
	    if (cin >> value) {
	        break;
	    } else {
	        cout << "Please enter a valid integer" << endl;
	        cin.clear();
	        cin.ignore(numeric_limits<streamsize>::max(), '\n');
	    }
	}	
}
