#pragma once
#include <iostream>
template <class T>
struct item
{
	T value;
	item* next;
	item(T val) 
	{
		value = val;
		next = nullptr;
	}
};
template <class T>
class List
{
private:
	item<T>* head;

public:
	List() 
	{ 
		head = nullptr; 
		std::cout << "Head = 0\n";
	}
	List(List& L) 
	{
		head = nullptr;

		item<T>* i;
		for (i = L.head; i; i = i->next) 
		{
			this->addItem(i->value);
			std::cout << "{" << i->value << "}" << " ";
		}
		std::cout << "List created from other list" << std::endl;
	}
	~List() 
	{
		std::cout << "Deleting list...\n";
		if (head) 
		{
			clear();
			std::cout << "List deleted" << std::endl;
		}
		if(head == 0)
		{
			std::cout << "List is empty" << std::endl;
		}
		
	}
	item<T>* addItem(T value) 
	{
		if (head == 0) 
		{
			head = new item<T>(value);
			std::cout << "New item create!\nItem Head = " << value << std::endl;
		}
		else 
		{
			item<T>* i;
			for (i = head; i->next != 0; i = i->next) {}
			i->next = new item<T>(value);
		}
		return head;
	}
	void print() 
	{
		std::cout << "--------------------INFO FOR LIST--------------------\n";
		std::cout << "Values: \n";
		item<T>* i;
		for (i = head; i != 0; i = i->next)
		{
			std::cout << "{" << i->value << "}" << " ";
		}
		std::cout << "\n-----------------------------------------------------";
		std::cout << std::endl;

	}
	void clear() 
	{
		while (head) 
		{
			item<T>* temp = head->next;
			delete head;
			head = temp;
		}
	}

	T* find(T val) 
	{
		item<T>* i;
		for (i = head; i != 0; i = i->next)
		{
			if (i ->value == val) 
			{
				std::cout << "Value findet: {" << val  << "}" << std::endl;
				return  &i->value;
			}
			if (i == i + 1)
			{
				if (i ->value != val) 
				{
					std::cout << "value not findet\n";
				}
			}
		}
	}

	void minMax() 
	{
		std::cout << "----------------MinMax----------------\n";
		item<T>* i;
		T max = 0;
		T min = 'z';
		for (i = head; i != 0; i = i->next)
		{
			std::cout << i->value << "\n";

			if (i->value >= max) 
			{
				max = i->value;
			}
			if (i->value <= min) 
			{
				min = i->value;
			}
		}
		std::cout << "Max = " << max << std::endl;
		std::cout << "Min = " << min << std::endl;
		std::cout << "----------------MinMax----------------\n";
	}

	void sum(T a, T b) 
	{
		T c = a + b;
		std::cout << "Sum = " << c << "\n";
	}
	//Другие типы данных: float/double - есть.
	//Добавить методы: find(T value) sum(), min(), max();
	//Тип string - <string>; сравнение строк, складывание строк: operator+()
};