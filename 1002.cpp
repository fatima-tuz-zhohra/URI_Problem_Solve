#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double n=3.14159;
	
	double  R,A;
	
	cin>>R;
	
	A=(n*(R*R));
	
	cout<<fixed<<setprecision(4)<<"A="<<A<<"\n";
	
	return 0;
	
}
