#include <vector>

#include <iostream>

#include "intvector.h"
#include "intlinkedlist.h"
#include "test.h"
#include "binarytree.h"


using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {

	int highest;
	int counter;
	for (int ar_i = 0; ar_i < n; ar_i++) {
		if (ar[ar_i] > highest)
		{
			highest = ar[ar_i];
		}
	}
	for (int ar_i = 0; ar_i < n; ar_i++) {
		if (ar[ar_i] == highest)
		{
			counter++;
		}
	}
	return counter;
}

int main() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int ar_i = 0; ar_i < n; ar_i++) {
		cin >> ar[ar_i];
	}
	int result = birthdayCakeCandles(n, ar);
	cout << result << endl;
	return 0;
}


//int main()
//{
//	//binaryTree* point;
//	//binaryTree squireel(92);
//
//
//	//squireel.add(19);
//	//squireel.add(7);
//	//squireel.add(100);
//	//squireel.add(98);
//	//squireel.add(99);
//	////squireel.add(8);
//
//
//
//
//	//nooms.~intLinkedList();
///*
//	nums.append(1);
//	nums.append(4);
//	nums.append(4);
//	nums.append(4);
//	nums.append(5);*/
//
//	//nums.Erase(3);
//	//nums.Insert(2, 4);
//	//int howManyFours = nums.Count(4);
//	//nums.printVector();
//	////
//	//assertEqual(howManyFours, 3);
//	//nums.Reserve(50);
//	//assertEqual((int)nums.getCapacity(), 50);
//	//nums.Compact();
//	//assertEqual((int)nums.getCapacity(), (int)nums.getSize());
//	/*assertEqual<size_t>(nums.getCapacity(), 2);
//
//
//
//	nums.append(1);
//	nums.append(5);
//
//	assertEqual(nums.at(0), 1);
//	assertEqual(nums.at(1), 5);
//
//	nums.append(33);
//
//	assertEqual(nums.at(0), 1);
//	assertEqual(nums.at(1), 5);
//	assertEqual(nums.at(2), 33);
//	assertEqual<size_t>(nums.getCapacity(), 4);
//	assertEqual<size_t>(nums.getSize(), 3);
//	assert<false>(nums.empty());
//	assertEqual(nums.front(), 1);
//	assertEqual(nums.back(), 33);
//	assertEqual(nums.c_ptr(), &nums.at(0));*/
//
//	//nums[1] // 5
//	while (true) {};
//	return 0;
//}