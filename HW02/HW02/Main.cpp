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
	Animal* animals[3];// �ϴ� dog cat cow 3������ �����̴ϱ� ����
	
	dog; // ���� ��� ������ ������ �������Ѵ�, class�� ���赵��, ���� ��ü�� ��ȯ�Ǵ� ���� �ٸ��ϱ�
	cat; //realcat=cat; << ���ȵ�
	cow; // ���������� �ٽ��ؾ��ϴµ�

	// int a; �̷������� ���̴�.




	// �迭�� �ݺ������� ��ȸ�ϸ鼭 �����Ҹ� ����

	cout << "�� �������� �����Ҹ� " << endl;
	for (int i = 0; i < 3 ; i++) // ũ�Ⱑ 3�� �迭�̴ϱ�
	{
		// animals[i] > makesound(); �̷������� ¥���ϳ�?
	}
	



	return 0;
}