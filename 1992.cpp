#include <iostream>
#include <string>
using namespace std;

struct Clons {
	int programm;
	Clons* back;
	Clons* nextpr;
};
Clons* newclon(int p, Clons* b, Clons* r) {
	Clons* node = new Clons;
	node->programm = p;
	node->back = b;
	node->nextpr = r;
	return node;
};
void learn(int prog, Clons*& clone) {
	Clons* updated = newclon(prog, clone, nullptr);
	clone = updated;
}
void rback(Clons*& clone) {
	Clons* updated = newclon(clone->back->programm, clone->back->back, clone);
	clone = updated;
}
void rnext(Clons*& clone) {
	Clons* updated = newclon(clone->nextpr->programm, clone, clone->nextpr->nextpr);
	clone = updated;
}
Clons* cl[500000];
int main()
{
	int n, m;
	cin >> n >> m;
	m = 1;
	cl[1] = newclon(0,NULL,NULL);

	for (int i = 0; i < n; i++) {
		string s;
		int num, prog;
		cin >> s >> num;

		if (s[0] == 'l') {
			cin >> prog;
			learn(prog, cl[num]);
		}
		else
			if (s[0] == 'r' && s[1] == 'o') {
				rback(cl[num]);
			}
			else
				if (s[0] == 'r' && s[1] == 'e') {
					rnext(cl[num]);
				}
				else
					if (s[0] == 'c' && s[1] == 'l') {
						m++;
						cl[m] = newclon(cl[num]->programm, cl[num]->back, cl[num]->nextpr);
					}
					else {
						if (cl[num]->programm == 0)
							cout << "basic"<<endl;
						else
							cout << cl[num]->programm << endl;
					}
	}
	return 0;
}
