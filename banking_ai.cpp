#include <iostream>
#include <vector>
#include <string>
#include <limits>

class Account {
public:
	Account(int id, std::string name, double balance = 0.0)
		: id(id), name(std::move(name)), balance(balance) {}

	int getId() const { return id; }
	const std::string& getName() const { return name; }
	double getBalance() const { return balance; }

	void deposit(double amt) { if (amt > 0) balance += amt; }
	bool withdraw(double amt) {
		if (amt > 0 && amt <= balance) { balance -= amt; return true; }
		return false;
	}

	void display() const {
		std::cout << "Account " << id << " - " << name
				  << " | Balance: " << balance << "\n";
	}

private:
	int id;
	std::string name;
	double balance;
};

static std::vector<Account> accounts;

Account* findAccount(int id) {
	for (auto &acc : accounts) if (acc.getId() == id) return &acc;
	return nullptr;
}

void pause() {
	std::cout << "Press Enter to continue...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
	int nextId = 1;
	while (true) {
		std::cout << "\nSimple Banking Menu:\n"
				  << "1) Create account\n"
				  << "2) Deposit\n"
				  << "3) Withdraw\n"
				  << "4) Show account\n"
				  << "5) List all accounts\n"
				  << "0) Exit\n"
				  << "Choose an option: ";

		int choice;
		if (!(std::cin >> choice)) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Try again.\n";
			continue;
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		if (choice == 0) break;

		if (choice == 1) {
			std::string name;
			std::cout << "Enter account holder name: ";
			std::getline(std::cin, name);
			accounts.emplace_back(nextId++, name, 0.0);
			std::cout << "Account created.\n";
			pause();
		} else if (choice == 2) {
			int id; double amt;
			std::cout << "Account ID: "; if (!(std::cin >> id)) { std::cin.clear(); std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); std::cout<<"Invalid id\n"; continue; }
			std::cout << "Amount to deposit: "; if (!(std::cin >> amt)) { std::cin.clear(); std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); std::cout<<"Invalid amount\n"; continue; }
			Account* a = findAccount(id);
			if (!a) { std::cout << "Account not found.\n"; pause(); continue; }
			a->deposit(amt);
			std::cout << "Deposited. New balance: " << a->getBalance() << "\n";
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); pause();
		} else if (choice == 3) {
			int id; double amt;
			std::cout << "Account ID: "; if (!(std::cin >> id)) { std::cin.clear(); std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); std::cout<<"Invalid id\n"; continue; }
			std::cout << "Amount to withdraw: "; if (!(std::cin >> amt)) { std::cin.clear(); std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); std::cout<<"Invalid amount\n"; continue; }
			Account* a = findAccount(id);
			if (!a) { std::cout << "Account not found.\n"; pause(); continue; }
			if (a->withdraw(amt)) std::cout << "Withdrawal successful. New balance: " << a->getBalance() << "\n";
			else std::cout << "Insufficient funds or invalid amount.\n";
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); pause();
		} else if (choice == 4) {
			int id; std::cout << "Account ID: "; if (!(std::cin >> id)) { std::cin.clear(); std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); std::cout<<"Invalid id\n"; continue; }
			Account* a = findAccount(id);
			if (!a) std::cout << "Account not found.\n";
			else a->display();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); pause();
		} else if (choice == 5) {
			if (accounts.empty()) std::cout << "No accounts.\n";
			else for (const auto &acc : accounts) acc.display();
			pause();
		} else {
			std::cout << "Unknown option.\n";
		}
	}

	std::cout << "Exiting. Goodbye.\n";
	return 0;
}

