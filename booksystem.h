#include<iostream>
#include<string>
using namespace std;
//图书类 
class Book
{
	public:
		Book(string,string,long,float,int,int);
		void Revise(string,string,long,float,int);//修改 
		void Display();//显示信息 
		int flag;//借出为0
		//获取信息 
		string GetName();
		string GetPublisher();
		long GetIsbn();
		float GetPrice();
		int GetPage();
	private:
		string name,publisher;
		long isbn;
		float price;
		int page;
};
//学生类 
class Student
{
	public:
		Student();
		void Borrow(Book bo[]);//借书 
		void Displ();
		string GetNa();
		long GetId();
	private:
		string name;
		long id;		
}; 
