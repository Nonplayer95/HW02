#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void makesound() = 0;
	virtual ~Animal() {}
};

class dog : public Animal
{
public:
	void makesound()
	{
		cout << "�۸�!" << endl;
	}
};

class cat : public Animal
{
public:
	void makesound()
	{
		cout << "�߿�~" << endl;
	}
};

class cow : public Animal
{
public:
	void makesound() 
	{
		cout << "����~~" << endl;
	}
};


int main()
{
	Animal* animals[3];// ������ �迭�����̶� ũ�� �ʱ�ȭ�� �ؾ��ϴµ� ũ�⸦ ���� ��ƾ��ϴ��� �𸣰���
	
	dog;// ���� ��� ������ ������ �������Ѵ�, class�� ���赵��, ���� ��ü�� ��ȯ�Ǵ� ���� �ٸ��ϱ�
	realcat=cat; // ??
	cow;


	int a;
	int dog;// dog�� ������ ���� ����°Ŵϱ� �ȵ� �̷��� ����

	// �迭�� �ݺ������� ��ȸ�ϸ鼭 �����Ҹ� ����

	cout << "�� �������� �����Ҹ� " << endl;
	for (int i = 0; i < ? ; i++)
	{
		// ���⼭ i�� ��� ��Ծ���ϴ°�
	}
	



	return 0;
}