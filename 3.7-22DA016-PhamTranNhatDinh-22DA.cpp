#include <iostream>;
using namespace std;
int main()

{
	int x,y,s;
	long long p,q;
	cout<<"Vui long nhap gia tri x: ";
	cin>>x;
	cout<<"Vui long nhap gia tri y: ";
	cin>>y;
	p=x*y;
	s=x+y;
	q=s*s+p*(s*x)+p*(p+y);
	cout<<"Ket qua cua p la: "<<p<<endl;
	cout<<"Ket qua cua s la: "<<s<<endl;
	cout<<"Ket qua cua q la: "<<q<<endl;
return 0;
}
