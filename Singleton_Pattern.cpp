#include "Singleton_Pattern.h"
Singleton* Singleton::uniqueInstance = NULL;//���еľ�̬�ֶ�Ҫ��cpp�ļ��г�ʼ������Ȼ�����Link����
Singleton::Singleton()
{
}//����Ҫ����
Singleton* Singleton::getInstance()
{
	if (Singleton::uniqueInstance == NULL) {
		uniqueInstance = new Singleton();
	}
	return Singleton::uniqueInstance;
}
