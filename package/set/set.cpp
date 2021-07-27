#include <iostream>
#include <set>

using namespace std;

void insert(set<int> *s) {
	for (int i = 0; i < 10; i++) {
		s->insert(i + 1);
	}
	return;
}

void find(set<int> *s) {
	auto it = s->find(5);
	if (it == s->end()) {
		cout << "未找到" << endl;
	} else {
		cout << "结果: " << *it << endl;
	}
	s->erase(it);
	it = s->find(5);
	if (it == s->end()) {
		cout << "未找到" << endl;
	} else {
		cout << "结果: " << *it << endl;
	}
}

void output(set<int> s) {
	for (auto it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	return;
}

int main() {
	set<int> s;
	insert(&s);
	output(s);
	insert(&s);
	output(s);
	find(&s);
	cout << s.size() << endl;
	return 0;
}
