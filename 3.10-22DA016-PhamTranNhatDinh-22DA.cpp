#include <iostream>;
using namespace std;
int main()

{
	int a,b,c;
	cout<<"Nhap so co hai chu so: ";
	cin>>a;
	if(a>99||a<10)
		cout<<"Nhap so sai."<<endl;
	else
		{
		b=a/10;
		c=a%10;
		cout<<"Tong so co hai chu so la: "<<b+c<<endl;
		}
return 0;
}
	
	
	
