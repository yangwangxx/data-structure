#include "bubblesort1A.hpp"
#include "iostream"
#include "bubblesort1A.hpp"
using namespace std;

#define false 0
#define true 1
void swap(int* a, int* b){//������������a,b 
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubblesort1A(int A[], int n){//���������㷨(�汾1A)��0 <= n
	bool sorted = false; //���������־�����ȼٶ�����	
	while (!sorted){//��δȷ���Ѿ���������֮ǰ���𲽽���ɨ�轻��
		for (int i = 1; i < n; i++){
			sorted = true; //�ٶ������Ѿ��������� 
			if (A[i - 1] > A[i]){//һ����������
				swap(&A[i - 1], &A[i]); // �򽻻� 
				sorted = false; // ���������������־ 
			}
		} 
		n--;
	} 
}

