#include<iostream>
#include<string>
#include<stack>

int main2() {
    std::string exp;
    std::stack<char> stk1;

    std::cout << "Enter the expression: ";
    std::getline(std::cin, exp);

    for (int i = 0; i < exp.length(); i++) {
        char c = exp[i];
        if (c == '(' || c == '[' || c == '{') {
            stk1.push(c);
        }

        else if (c == ')' || c == ']' || c == '}') {

            if (stk1.empty()) {
                std::cout << "Error at " << i << ": unexpected closer";
                return 0;
            }

            else if ((c == ')' && stk1.top() != '(') ||
                (c == ']' && stk1.top() != '[') ||
                (c == '}' && stk1.top() != '{')) {

                std::cout << "Error at " << i << ": wrong closer";
                return 0;
            }

            else {
                stk1.pop();
            }
        }
    }

    if (!stk1.empty()) {
        std::cout << "Error: unclosed opener";
    }

    else {
        std::cout << "Balanced";
    }

    return 0;
}
