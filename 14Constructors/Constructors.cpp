#include <iostream>
#include <string>
using namespace std;

class BuckysClass {
public:
	BuckysClass(string z) {
		setName(z);				//cout << "this will get printed automagically" (dont print out like this here);
	}
	void setName(string x) {
			{
				name = x;
			} }
	string getName() {
		return name;
	}
	private:
		string name;
};
int main()
{
	BuckysClass bo ("Lucky Bucky Roberts");
	cout << bo.getName();

	BuckysClass bo2(" Sally mcSalad");
	cout << bo2.getName();
	return 0;
}