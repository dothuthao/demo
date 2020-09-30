#include<iostream>
#include<string>
using namespace std;
class the
{
	public:
	    void nhap();
       	void xuat();
       	string get_lop();
    private:
    	string ma,ten,lop;
    	int namhh;   
};
void the::nhap()
{
	cout<<"\nNhap ma the: "; getline(cin,ma);
	cout<<"\nNhap ten nguoi doc: "; getline(cin,ten);
	cout<<"\nNhap lop: "; getline(cin,lop);
	cout<<"Nhap nam het han: "; cin>>namhh;
	cin.ignore();
}
void the::xuat()
{
	cout<<"\nMa the: "<<ma;
	cout<<"\nTen nguoi doc: "<<ten;
	cout<<"\nLop: "<<lop;
	cout<<"\nNam het han: "<<namhh;
}
string the::get_lop()
{
	return lop;
}
int main ()
{
	the T1,T2;
	cout<<"Nhap thong tin the 1:\n";
	T1.nhap();
	cout<<"Nhap thong tin the 2:\n";
	T2.nhap();
	cout<<"Thong tin cac the vua nhap:\n";
	T1.xuat();
	T2.xuat();
	if(T1.get_lop()==T2.get_lop())
	cout<<"Hoc cung lop";
	else cout<<"Hoc khac lop";
}
