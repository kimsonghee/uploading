#include <iostream>
using namespace std;

class RightAngledTriangle
{
public:
	void output();
	int i;
	int j;
	int num;
	int direction;
};

class EquilateralTriangle
{
public:
	void output();
	int num;
	int i;
	int j;
};

class Diamond
{
public:
	void output();
	int num;
	int j;
	int i;
};

int main()
{
	RightAngledTriangle first;
	cout << "직각삼각형을 그립니다.\n";
	cout << "원하는 모양의 번호를 입력하세요.\n";
	cout << "1.왼쪽으로 향한 직각삼각형\n2.오른쪽으로 향한 직각삼각형\n";
	cin >> first.direction;
	cout << "줄의 갯수를 입력하세요.\n";
	cin >> first.num;
	first.output();

	EquilateralTriangle second;
	cout << "정삼각형을 그립니다.\n";
	cout << "줄의 갯수를 입력하세요.\n";
	cin >> second.num;
	second.output();

	Diamond third;
	cout << "다이아몬드를 그립니다.\n";
	cout << "상단부(혹은 하단부) 줄의 갯수를 입력하세요.\n";
	cin >> third.num;
	third.output();

	return 0;
}

void RightAngledTriangle::output()
{
	switch(direction)
	{
		case 1:
			for(i=0; i<num; i++){
				for(j=0; j<num-1-i; j++)
					cout << " ";
				for(j=0; j<=i; j++)
					cout << "*";
				cout << "\n";
			} break;
				
		case 2:
			for(i=0; i<num; i++){
				for(j=0; j<=i; j++)
					cout << "*";
				cout << "\n";
			} break;

		default:
			cout << "잘못 입력하셨습니다. 다시 입력하세요.\n";
	}
}

void EquilateralTriangle::output()
{
	for(i=0; i<=num-1; i++){
		for(j=0; j<=num-i-1; j++)
			cout<<" ";
		for(j=0; j<i*2+1; j++)
			cout << "*";
		cout << "\n";
	}
}

void Diamond::output()
{
	for(i=1; i<num; i++){
		for(j=0; j<num-i; j++){
			cout << " ";
		}
		for( j=0; j<2*i-1; j++){
			cout << "*";
		}
		cout << "\n";
	}
	for(i=num-2; i>0; i--){
		for(j=0; j<num-i; j++){
			cout << " ";
		}
		for(j=0; j<2*i-1; j++){
			cout << "*";
		}
		cout << "\n";
	}

} 

