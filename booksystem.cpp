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
	cout<<"ͼ���������:"<<name<<"\n"<<"ͼ��isbn��Ϊ:"<<isbn<<"\n"<<"ͼ��۸�:"<<price<<"\n"<<"ͼ���ҳ��:"<<page<<endl;
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
	cout<<"ѧ������:"<<name<<"\n"<<"ѧ��ѧ��:"<<id<<endl; 
}
Student::Student()
{
	name="С��";
	id=0001;
}
void Student::Borrow(Book bo[])
{
	string bona;//�����ͼ���� 
	int x=0;//�ж��Ƿ��ҵ�ͼ�� 
	char answer;//�Ƿ�������� 
	for(int k=0;;k++)
	{
		x=0; 
		cout<<"��������Ҫ���������:"<<"\n";
		cin>>bona;
		for(int i=0;i<3;i++)
		{
			x++;
			if(bona==bo[i].GetName())
			{
				if(bo[i].flag==1)
				{
				   cout<<"���Խ赽ͼ����ϢΪ:"<<"\n";
		     	   bo[i].Display();
		     	   bo[i].flag=0;
		     	   break;
				}
				else
				{
					cout<<"��ͼ���Ѿ������"<<"\n";
					break; 
				}
			} 
		}
		if(x==3)
		{
			cout<<"û���ҵ��˱���"<<"\n";
		}
		cout<<"�Ƿ��������(y/n)"<<"\n";
		cin>>answer;
		if(answer=='n')
		break;
	}
} 
