#include<iostream>
#include<string>
#include<stack>
int main1() {
	std::stack<char> stk1;
	std::stack<std::string> stk2;
	std::string s;

	std::cout << "Enter a string: ";
	std::getline(std::cin, s);

	std::cout << "Part a: " << std::endl;
	for (char c : s) {
		stk1.push(c);
	}

	while (!stk1.empty()) {
		std::cout << stk1.top();
		stk1.pop();
	}
	std::cout << std::endl;

	for (char c : s) {
		std::cout << stk2.top();
		stk2.pop();
	}
	std::cout << std::endl;
	std::cout << "Part b: " << std::endl;
	std::string word = "";

	for (int i = 0; i < s.length(); ++i) {
		if (s[i] != ' ') {
			word += s[i];
		}
		if (s[i] == ' ' || i == s.length() - 1) {
			stk2.push(word);
			word = "";
		}
	}
	while (!stk2.empty()) {
		std::cout << stk2.top() << " ";
		stk2.pop();
	}
	std::cout << std::endl;

	return 0;
}