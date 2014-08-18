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
	cout << "�����ﰢ���� �׸��ϴ�.\n";
	cout << "���ϴ� ����� ��ȣ�� �Է��ϼ���.\n";
	cout << "1.�������� ���� �����ﰢ��\n2.���������� ���� �����ﰢ��\n";
	cin >> first.direction;
	cout << "���� ������ �Է��ϼ���.\n";
	cin >> first.num;
	first.output();

	EquilateralTriangle second;
	cout << "���ﰢ���� �׸��ϴ�.\n";
	cout << "���� ������ �Է��ϼ���.\n";
	cin >> second.num;
	second.output();

	Diamond third;
	cout << "���̾Ƹ�带 �׸��ϴ�.\n";
	cout << "��ܺ�(Ȥ�� �ϴܺ�) ���� ������ �Է��ϼ���.\n";
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
			cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n";
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

