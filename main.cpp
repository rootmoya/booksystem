#include <iostream>
#include <string>
#include "booksystem.h" 
int main(int argc, char** argv)
{
		
	Book bo[3]=
	{
		Book("��������","���ϿƼ���ѧ",250,200,150,1),
		Book("С����","���ϿƼ���ѧ",251,250,100,1),
		Book("��¥��","���ϿƼ���ѧ",252,200,1500,1)
	};
	Student stu;
	stu.Borrow(bo);
	return 0;
}
