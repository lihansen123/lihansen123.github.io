#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
int main() {
//	step 0: ��ʼ��vector������Ϊsk������Ϊ1000����
	vector <int> sk(1000);
	for(int i = 1; i <= sk.size(); i++) {
		sk[i-1] = rand() % 100;
	}
//	step 1: ɾ��sk�е�5����18��Ԫ�ء�
	sk.erase(sk.begin() + 5 - 1, sk.begin() + 18 - 1);
//	step 2: ��233���뵽sk�е�233��Ԫ�صĺ��档 
	sk.insert(sk.begin() + 233 - 1, 233);
//	step 3: ��sk�е�����Ԫ�ذ������ҵ�˳��������ÿո������
	for(int i = 1; i <= sk.size(); i++) {
		cout << sk[i-1] << " ";
	}
	return 0;
}
