#include "Array.h"

int main(void)
{
	int i;
	
	cout << "�迭 ũ�� �Է�:"; cin >> i;
	Array<int> Arr(i);
	
	for (int j = 0; j < i; j++)
		cout << Arr[j] << " ";
	/*for (int j = 0; j < i; j++)
		Arr[j] = j;*/
}