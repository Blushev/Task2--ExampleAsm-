#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, x;
		cout << "Write numbers with a space for example (((a + b) * c) - d) / e" << endl;
		cin >> a >> b >> c >> d >> e;
	
		_asm
		{
			mov eax, a;  // a => eax служит нам "хранилищем", куда мы можем записывать всякие данные! 
			add eax, b   // (a + b)
			mul c;	     // ((a + b) * c)
			sub eax, d;  // (((a + b) * c) - d)
			div e;		 // (((a + b) * c) - d) / e
			mov x, eax;  // x = (((a + b) * c) - d) / e
		}
		cout << "Get result: " << x << endl;
}
