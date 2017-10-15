#include <iostream>
#include <string>
using namespace std;

class MyClass{
	public:
		MyClass (string z){
    		setName (z) ;
		}
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
	MyClass mo("Ahmet");
	cout << bo.getName();

	MyClass mo2("Tarik")
	  return 0;
}

