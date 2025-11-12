#include "List.h"

int main() 
{
	List <int>l1;
	l1.addItem(1000);
	l1.addItem(202);
	l1.print();
	List <int> l2(l1);
	l2.addItem(2);
	l2.addItem(5);
	l2.addItem(12);
	l2.find(5);
	l2.print();
	List <float> l3;
	l3.addItem(3.13);
	l3.addItem(4.15);
	l2.minMax();
	l3.print();


	return 0;
}