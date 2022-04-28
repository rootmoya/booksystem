#include<iostream>
#include<string>
#include "booksystem.h" 
using namespace std;
Book::Book(string na,string pu,long is,float pr,int pa,int fl)
{
	name=na;
	publisher=pu; 
	isbn=is;
	price=pr;
	page=pa; 
	flag=fl;
}
void Book::Revise(string na,string pu,long is,float pr,int pa)
{
	name=na;
	publisher=pu;
	isbn=is;
	price=pr;
	page=pa;
}
void Book::Display()
{
	cout<<"图书的名称是:"<<name<<"\n"<<"图书isbn号为:"<<isbn<<"\n"<<"图书价格:"<<price<<"\n"<<"图书的页数:"<<page<<endl;
}
string Book::GetName()
{
	return name;
}
string Book::GetPublisher()
{
	return publisher;
}
long Book::GetIsbn()
{
	return isbn;
}
float Book::GetPrice()
{
	return price;
}
int Book::GetPage()
{
	return page;
}

void Student::Displ()
{
	cout<<"学生姓名:"<<name<<"\n"<<"学生学号:"<<id<<endl; 
}
Student::Student()
{
	name="小明";
	id=0001;
}
void Student::Borrow(Book bo[])
{
	string bona;//输入的图书名 
	int x=0;//判断是否找到图书 
	char answer;//是否继续借书 
	for(int k=0;;k++)
	{
		x=0; 
		cout<<"请输入想要借书的书名:"<<"\n";
		cin>>bona;
		for(int i=0;i<3;i++)
		{
			x++;
			if(bona==bo[i].GetName())
			{
				if(bo[i].flag==1)
				{
				   cout<<"你以借到图书信息为:"<<"\n";
		     	   bo[i].Display();
		     	   bo[i].flag=0;
		     	   break;
				}
				else
				{
					cout<<"此图书已经被借出"<<"\n";
					break; 
				}
			} 
		}
		if(x==3)
		{
			cout<<"没有找到此本书"<<"\n";
		}
		cout<<"是否继续借书(y/n)"<<"\n";
		cin>>answer;
		if(answer=='n')
		break;
	}
} 
