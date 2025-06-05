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
		cout << "멍멍!" << endl;
	}
};

class cat : public Animal
{
public:
	void makesound()
	{
		cout << "야옹~" << endl;
	}
};

class cow : public Animal
{
public:
	void makesound() 
	{
		cout << "음메~~" << endl;
	}
};


int main()
{
	Animal* animals[3];// 일단 dog cat cow 3종류의 동물이니까 담음
	
	dog; // 실제 사용 가능한 놈으로 만들어야한다, class는 설계도고, 실제 객체로 소환되는 놈은 다르니까
	cat; //realcat=cat; << 사용안됨
	cow; // 변수선언을 다시해야하는데

	// int a; 이런식으로 말이다.




	// 배열을 반복문으로 순회하면서 울음소리 내기

	cout << "각 동물들의 울음소리 " << endl;
	for (int i = 0; i < 3 ; i++) // 크기가 3인 배열이니까
	{
		// animals[i] > makesound(); 이런식으로 짜야하나?
	}
	



	return 0;
}