#include<iostream>
#include<queue>
#include<vector>

int main() {
	std::queue<int> q;
	int n, k;
	std::cout << "Enter the total number: ";
	std::cin >> n;
	std::cout << "Enter the number of rotation: ";
	std::cin >> k;
	for (int i = 1;i <= n;++i) {
		q.push(i);
	}
	int val;
	std::vector<int> v;
	for (int i = 1;i <= n;++i) {
		for (int i = 1;i <= k;++i) {
			val = q.front();
			q.pop();
			q.push(val);
		}
		v.push_back(val+1);
		q.pop();
	}
	std::cout << "Elementor: ";
	for (int i = 0;i < v.size();++i) {
		std::cout << v[i];
	}
	std::cout << std::endl;
	std::cout << "Winner: ";
	std::cout << q.front();
}