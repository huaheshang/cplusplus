#include<vector>
#include<iostream>
using namespace std;
int main()
{
	vector<int> vint;
	vint.push_back(1);
	vint.push_back(2);
	vint.push_back(3);
	vector<int>::iterator iter;
	for(iter=vint.begin();iter!=vint.end();iter++)
		cout<<*iter<<"\t";
	cout<<endl;
	vector<int> v2(vint);
	v2.push_back(4);
	for(iter=v2.begin();iter!=v2.end();iter++)
		cout<<*iter<<"\t";
	cout<<endl;
	
	vector<int> v3(3);
	for(iter=v3.begin();iter!=v3.end();iter++)
		cout<<*iter<<"\t";
	cout<<endl;

	vector<int> v4(3,4);
	for(iter=v4.begin();iter!=v4.end();iter++)
		cout<<*iter<<"\t";
	cout<<endl;
	
	vector<int> v5(v2.begin(),v2.end());
	for(iter=v5.begin();iter!=v5.end();iter++)
		cout<<*iter<<"\t";
	cout<<endl;
	
	int a[]={1,2,3,4};
	vector<int> v6;
	v6.assign(a,a+4);
	for(iter=v6.begin();iter!=v6.end();iter++)
		cout<<*iter<<"\t";
	cout<<endl;
	cout<<v6.capacity()<<endl;
	cout<<v6.empty()<<endl;
	cout<<*v6.begin()<<endl;
	v6.pop_back();
	for(iter=v6.begin();iter!=v6.end();iter++)
		cout<<*iter<<"\t";
	cout<<endl;
}

