#include<iostream>
#include<string>
using namespace std;
//ͼ���� 
class Book
{
	public:
		Book(string,string,long,float,int,int);
		void Revise(string,string,long,float,int);//�޸� 
		void Display();//��ʾ��Ϣ 
		int flag;//���Ϊ0
		//��ȡ��Ϣ 
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
//ѧ���� 
class Student
{
	public:
		Student();
		void Borrow(Book bo[]);//���� 
		void Displ();
		string GetNa();
		long GetId();
	private:
		string name;
		long id;		
}; 
