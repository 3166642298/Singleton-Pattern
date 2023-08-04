#include<iostream>
#include"Singleton_Pattern.h"
using namespace std;
int main()
{
	Singleton* singleton= Singleton::getInstance();
	return 0;
}