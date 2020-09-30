#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class sophuc
{
	public: void nhap();
	        void in();
	        float get_thuc();
	        float get_ao();
	        void set_a(float x);
	        void set_t(float y);
    private:
    	float thuc,ao;
};	
void sophuc::set_a (float x)
{
	ao=x;
}
void sophuc::set_t (float y)
{
	thuc=y;
}
void sophuc::nhap()
{
	cout<<"Phan ao: ";
	cin>>ao;
	cout<<"Phan thuc: ";
	cin>>thuc;
}
void sophuc::in()
{
	cout<<thuc<<"+"<<ao<<"i";
}
float sophuc::get_ao()
{
	return ao;
}
float sophuc::get_thuc()
{
	return thuc;
}
sophuc tong(sophuc a,sophuc b)
{
	sophuc T;
	T.set_a(a.get_ao()+b.get_ao());
	T.set_t(a.get_thuc()+b.get_thuc());
	return T;
}
sophuc tich(sophuc a, sophuc b)
{
	sophuc S;
	S.set_t(a.get_thuc()*b.get_thuc()-a.get_ao()*b.get_ao());
	S.set_a(a.get_thuc()*b.get_ao()+a.get_ao()*b.get_thuc());
	return S;	
}
int main()
{
	sophuc s1,s2,T,S;
	cout<<"Nhap thong tin s1\n";
	s1.nhap();
	cout<<"Nhap thong tin s2\n";
	s2.nhap();
	cout<<"So phuc 1: ";
	s1.in();
	cout<<"\nSo phuc 2: ";
	s2.in();
	T=tong(s1,s2);
	cout<<"\nTong 2 so phuc: ";
	T.in();
	S=tich(s1,s2);
	cout<<"\nTich 2 so phuc: ";
	S.in();
}
