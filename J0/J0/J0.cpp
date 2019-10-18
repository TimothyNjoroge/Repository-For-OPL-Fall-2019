/*
* Program Name: J0
*
* Description:
*
* Purpose: Class
*
* Inputs:
*
* Outputs:
*
* Author: Tim Njoroge
*
* Date: 10/8/19
*
* Modification History:
*
* Sources of Help:
*
* Time Spent:
*
*/

#include <iostream>
#include <string>
using namespace std;

// J0 Module
// e = v | (+ e e) | (* e e)
// v = number

class JExpression
{

private:

public:
	
	bool isValue();

	string  show();
};


class JNumber : public JExpression
{
private:


public:
	 int n;

	 JNumber(int n)
	{
		this-> n = n;
	}
	
	 bool isValue()
	 {
		 return true; 
	 }

	 string show()
	 {
		 return to_string(this->n);
	 }

	 
};


class JAdd : public JExpression
{

private:

public:

	 JExpression LHS, RHS;
	 JAdd(JExpression LHS, JExpression RHS)
	{
		this-> LHS = LHS;
		this-> RHS = RHS;
	}
	 bool isValue()
	 { 
		 return false;
	 }

	 string show()
	 {
		// return "(" + to_string(this->LHS.show) + " + " + to_string(this->RHS.show) + ")";

		 return "(" + (this->LHS.show) + " + " + (this->RHS.show) + ")";

	 }

};


class JMultiply : public JExpression
{

private:

public:

	JExpression LHS, RHS;

	JMultiply(JExpression LHS, JExpression RHS)
	{
		this-> LHS = LHS;
		this-> RHS = RHS;
	}
	 bool isValue()
	 {
		 return false;
	 }

	 string show()
	 {
		 return "(" + (this->LHS.show) + " * " + (this->RHS.show) + ")";
	 }

};

/*

class C5
{

private:

public:


	public static void main(String args[])
	{
		return;
	}
};

*/


void test(JExpression expression1)
{
	cout << expression1.show();
}

int main()
{


	void test(JExpression expression1);

	test(JNumber(42));
	test(JNumber(7));
	test(JAdd(JNumber(42), JNumber(0)));
	test(JMultiply(JNumber(42), JNumber(0)));
	test(JAdd(JMultiply(JNumber(42), JNumber(0)),JNumber(0)));
	test(JAdd(JMultiply(JNumber(42), JNumber(0)), JAdd(JMultiply(JNumber(42), JNumber(0)), JNumber(0))));








	cout << "Run Successful" << "\n" << "\n";





	system("pause");

	return 0;
}