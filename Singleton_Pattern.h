#pragma once
#ifndef SINGLETON_PATTERN_H
#define SINGLETON_PATTERN_H
#include<iostream>
using namespace std;
class Singleton {
private:  

	static Singleton* uniqueInstance;
	Singleton();
public:
    static Singleton* getInstance();
}; 
#endif // !SINGLETON_PATTERN_H
