#include <iostream>
#include <string>
using namespace std;

class MyClass{
	public:
		void setName (string x){
			name = x;
		}
		string getName(){
			return name;
		}
	private:
		string name;
};

int main () 
{
	MyClass mo;
	mo.setName("Tarik T");
	cout << mo.getName();
	  return 0;
}

