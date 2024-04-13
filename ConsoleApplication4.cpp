#include <iostream>
#include <cstring> 
using namespace std;

class Fraction 
{
private:
	int m_numerator = 0;
	int m_denominator = 1;
public:
	Fraction(int numerator = 0, int denominator = 1) : m_numerator(numerator), m_denominator(denominator) 
	{}

	friend ostream& operator<<(ostream&out,const Fraction& f1) 
	{
		out << f1.m_numerator << "/" << f1.m_denominator;
		return out;
	}
};

void printFraction(unique_ptr<Fraction>& ptr)
{
	if(ptr) 
	{
		cout << *ptr;
	}
}

int main() 
{
	unique_ptr<Fraction> ptr(new Fraction(7, 9));
	printFraction(ptr);
}
