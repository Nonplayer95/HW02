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
	Animal* animals[3];// 포인터 배열선언이라 크기 초기화를 해야하는데 크기를 뭘로 잡아야하는지 모르겟음
	
	dog;// 실제 사용 가능한 놈으로 만들어야한다, class는 설계도고, 실제 객체로 소환되는 놈은 다르니까
	realcat=cat; // ??
	cow;


	int a;
	int dog;// dog란 변수를 새로 만드는거니깐 안됨 이렇게 쓰면

	// 배열을 반복문으로 순회하면서 울음소리 내기

	cout << "각 동물들의 울음소리 " << endl;
	for (int i = 0; i < ? ; i++)
	{
		// 여기서 i릉 어떻게 써먹어야하는가
	}
	



	return 0;
}