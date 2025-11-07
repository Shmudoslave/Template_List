#include "List.h"

int main() 
{
	List <int>l1;
	l1.addItem(1000);
	l1.addItem(202);
	l1.addItem(110);
	l1.addItem(1);
	l1.print();
	List <int> l2(l1);
	l2.addItem(2);
	l2.addItem(5);
	l2.print();


	return 0;
}