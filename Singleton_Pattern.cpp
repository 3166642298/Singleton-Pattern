#include "Singleton_Pattern.h"
Singleton* Singleton::uniqueInstance = NULL;//类中的静态字段要在cpp文件中初始化，不然会出现Link错误
Singleton::Singleton()
{
}//函数要定义
Singleton* Singleton::getInstance()
{
	if (Singleton::uniqueInstance == NULL) {
		uniqueInstance = new Singleton();
	}
	return Singleton::uniqueInstance;
}
