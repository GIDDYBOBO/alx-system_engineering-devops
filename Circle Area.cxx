#include <iostream>
#include <string>
using namespace std;
#define PI  3.142
int main()
{
	string str;
	double rad, num, dia,AREA1, AREA;
	cout <<"Hello there, please write in your name ::: ";
	getline (cin,str);
	cout <<" great, welcome Mr/Mrs/Miss. " << str <<endl;
loop:	cout <<" reply '1' to input radius of the circle or rather reply '2' to input the diameter of the circle"<<endl;
	cin >> num;
	if (num == 1)
	{
		cout << "you replied '1' \n Please enter the radius of the circle = " <<endl;
		cout <<" already given π as 3.142"<<endl;
		cin >> rad;
		AREA = PI*rad*rad;
		cout <<"The area of the circle is = "<< AREA <<endl;
		cout << " interesting right 💯😁"<<endl;
	}
	else if (num == 2)
	{
		cout <<" you replied '2' \n Please input the DIAMETER of the circle= "<<endl;
		cin >> dia;
		cout <<" already given π as 3.142"<< endl;
		AREA1 =(PI*dia*dia)/4;
		cout <<" The are of the circle is= "<<AREA1<<endl;
	}
	else
{
		cout << " error"<<endl;
		goto loop;
}
return 0;
}
		
		