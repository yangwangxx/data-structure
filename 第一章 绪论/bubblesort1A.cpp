#include "bubblesort1A.hpp"
#include "iostream"
#include "bubblesort1A.hpp"
using namespace std;

#define false 0
#define true 1
void swap(int* a, int* b){//交换两个整数a,b 
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubblesort1A(int A[], int n){//起泡排序算法(版本1A)：0 <= n
	bool sorted = false; //整体有序标志，首先假定无序	
	while (!sorted){//尚未确定已经整体有序之前，逐步进行扫描交换
		for (int i = 1; i < n; i++){
			sorted = true; //假定数组已经整体有序 
			if (A[i - 1] > A[i]){//一旦存在逆序
				swap(&A[i - 1], &A[i]); // 则交换 
				sorted = false; // 并设置整体有序标志 
			}
		} 
		n--;
	} 
}

