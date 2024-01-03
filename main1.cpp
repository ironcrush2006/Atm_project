#include<iostream> 

class Details {
private:
	std::string m_Name;
	int m_Age;
	int m_Pin;
	float m_Amount=0.00;
public: 
	void get_data(std::string Name,int Age,int Pin) {
		float Amount = m_Amount;
		Name = m_Name;
		Age=m_Age;
		Pin=m_Pin;
	}
	
	void input_data() {
		std::string*  Name=&m_Name;
		int * Age = &m_Age;
		int * Pin=&m_Pin;
		std::cout << "Enter Name:";
		std::cin >>(* Name);
		std::cout << "Enter Age:";
		std::cin >> (*Age);
		std::cout << "Enter Pin:";
		std::cin >>(*Pin);

		get_data(*Name,*Age,*Pin);
	}

	void Show_data() {
		std::string *Name=&m_Name;
		int* Age = &m_Age;
		int* Pin = &m_Pin;
		float* Amount = &m_Amount;
		std::cout << "---- Details ----\n";
		std::cout<<"Name:" << *Name << std::endl;
		std::cout<<"Age:" << *Age << std::endl;
		std::cout<<"Pin:" << *Pin << std::endl;
		std::cout<<"Amount:" << *Amount << std::endl;
	}
	float get_amount(float amount) {
	       m_Amount=amount;
		return m_Amount;
	}
	void Deposit_Withdrawal() {
		char b_choice;
		std::cout << "--W for Withdrawal--\t";
		std::cout << "--d for Deposit--\n\t";
		std::cin >> b_choice;
		switch (b_choice) 
		{
		case 'w':
			std::cout << "---- Withdrawal ----\n";
			float money;
			std::cout << "Amount to withdraw:"<<std::endl;
			std::cin >> money;
			break;
		case 'd':
			std::cout << "---- Deposit ----\n";
			float money1;
			std::cout << "Amount to deposit:" << std::endl;
			std::cin >> money1;
			break;

		}
	}
	Details():m_Age(0),m_Pin(0) {
		bool choice;
		std::cout <<"---- FUN BANK ----\n";
		input_data();
		Show_data();
		std::cout << "Press '1' to deposit or withdraw\n";
		std::cin >> choice;
		
		if (choice==true) {
			Deposit_Withdrawal();
		}
		std::cout << "---- Thank You  ----";
	}
	~Details(){}
};

int main() {
	Details Bank;


	return 0;
}