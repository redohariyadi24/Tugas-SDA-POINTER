#include <iostream>
#include <string>
using namespace std;

int main() {
	int a = 10;
	int b = 15;
	int c = 27;
	int *p1;
	int *p2;
	int *p3;

	p1 = &a;
	p2 = &b;
	*p1 = c;
	a = *p2;
	b = 6;
	p3 = &b;
	p3 = &c;
	*p1 = *p3;

	cout<<"Nilai variabel a : "<<a<<endl;
	cout<<"Nilai variabel b : "<<b<<endl;
	cout<<"Nilai variabel c : "<<c<<endl;
	cout<<"Alamat yang tersimpan di Pointer p1 : "<<p1<<endl;
	cout<<"Alamat yang tersimpan di Pointer p2 : "<<p2<<endl;
	cout<<"Alamat yang tersimpan di Pointer p3 : "<<p3<<endl;
	cout<<"Nilai dari alamat yang tersimpan pada Pointer p1 : "<<*p1<<endl;
	cout<<"Nilai dari alamat yang tersimpan pada Pointer p2 : "<<*p2<<endl;
	cout<<"Nilai dari alamat yang tersimpan pada Pointer p3 : "<<*p3<<endl;
	
	return 0;
}