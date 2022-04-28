#include <iostream>
#include <string>
#include "booksystem.h" 
int main(int argc, char** argv)
{
		
	Book bo[3]=
	{
		Book("三国演义","西南科技大学",250,200,150,1),
		Book("小王子","西南科技大学",251,250,100,1),
		Book("红楼梦","西南科技大学",252,200,1500,1)
	};
	Student stu;
	stu.Borrow(bo);
	return 0;
}
