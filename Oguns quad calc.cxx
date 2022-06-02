#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	double a, b, c, d, e, f, g, h, I, j, k, l;
       string nam;
       cout <<"Please enter your name : ";
       cin >> nam;
       cout << endl;
       cout << " Welcome! Mr/Mrs/Miss " << nam <<endl;
       cout <<"NOTE: The following quadratic equation calculator is of only quadratic and not of BI or TRI quadratic equation!. "<<endl;
       
       // inputting the operation and operand
       
       cout <<" please input your values \n Take (X²) value as = ";
       cin >> a;
       cout << endl;
       cout <<" take (X) value as = ";
       cin >> b;
       cout << endl;
       cout << "The constant as = ";
       cin >> c;
       cout << endl;
       cout <<"The equation "<< a <<"X² (+) " << b << "X (+) " << c << " = 0 " <<endl;
       
       // Solving the equation using the almighty formula

       cout <<" To solve the quadratic equation using the almighty formula \n. "<<endl;
       cout << endl;
	   cout <<"_______________---------Cool-----------__________________\n  To solve using the Quadratic formula : \n (-b ± (√(b² - 4ac))) / 2a ";
	   cout << " Given the equation as : " << a <<" X² (+) " << b << " X (+) " << c << " = 0 "<<endl;
	   cout <<" NOTE : \n b = " << b << " \na = " << a << " \nc = " << c<<endl;
	   // calculating in a separate entity for better understanding
	d = pow(b,2); 
	e = 4 * a * c;
	f = d - e;
	g = sqrt (f);
	h = 2 * a;
	I = g / h;
	j = -b / h;
	k = j + I;
	l = j - I;
	   cout <<" -b ± (√(b² - 4ac) / 2a "<<endl;
	   cout << "\n  solving them independently for easy understanding. \n Given (√(b² - 4ac))  = " << g <<endl;
	cout <<" \n (√(b² - 4ac)) / 2a  = "<< I <<endl;
	cout <<"\n  -b / 2a = " << j << endl;
	cout <<" Therefore : \n -b / 2a ± (√(b² - 4ac)) / 2a = " << k << "  OR   " << l <<endl;
	   cout << " Cool right!!!! "<<endl; 
return 0;
}
	 