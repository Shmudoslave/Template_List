#include "List.h"

int main() 
{
	List <int>l1;
	l1.addItem(1000);
	l1.addItem(20);
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
	l3.minMax();
	l3.print();
	l3.sum(3.13, 4.15);
	List <char> l4;
	l4.addItem('c');
	l4.addItem('a');
	l4.addItem('t');
	l4.print();
	l4.find('a');
	l4.minMax();
	l4.sum('a', 'b');


	return 0;
}