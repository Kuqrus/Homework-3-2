#include <iostream>

class counter
{
public:

	void setUserValue(int num_) {
		num = num_;
	}
	void setDefaultValue() {
		num = 1;
	}

	int add() { return num++; }
	int sub() { return num--; }
	void print() { std::cout << "Current value: " << num << std::endl; }

private:
	int num;
};


int main()
{
	counter test;

	char isUserValue = ' ';
	
	std::cout << "Do you want to input start value (y/n)? ";
	std::cin >> isUserValue;
	
	if (isUserValue == 'y') {
		int userValue = 0;
		std::cout << "Enter start value: ";
		std::cin >> userValue;
		test.setUserValue(userValue);
	}
	else if (isUserValue == 'n') {
		test.setDefaultValue();
	}	


	char userAction= ' ';
	while(userAction != 'x')
	{
		std::cout << "Choose action (+, -, =, x): ";
		std::cin >> userAction;

		switch (userAction)
		{
		case('+'):
			test.add();
			break;
		case('-'):
			test.sub();
			break;
		case('='):
			test.print();
			break;
		default:
			break;
		}

	}
	

}

