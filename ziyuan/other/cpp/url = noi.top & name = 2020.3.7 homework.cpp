#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
int main() {
//	step 0: 初始化vector，名字为sk，数量为1000个。
	vector <int> sk(1000);
	for(int i = 1; i <= sk.size(); i++) {
		sk[i-1] = rand() % 100;
	}
//	step 1: 删除sk中第5到第18个元素。
	sk.erase(sk.begin() + 5 - 1, sk.begin() + 18 - 1);
//	step 2: 将233插入到sk中第233个元素的后面。 
	sk.insert(sk.begin() + 233 - 1, 233);
//	step 3: 将sk中的所有元素按从左到右的顺序输出，用空格隔开。
	for(int i = 1; i <= sk.size(); i++) {
		cout << sk[i-1] << " ";
	}
	return 0;
}
