#include<iostream>
#include<map>

using namespace std;
int a[10004];

int main(){
	
	map<int, int> m;
	map<int, int>:: iterator it;
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	  cin>>a[i];
	
	for(int i=0;i<n;i++)
	  m[a[i]]++;
	  
	  for(it=m.begin(); it!=m.end(); it++)
	   cout<<it->first<<" "<<it->second<<endl;
	   
	   // searching
	   int x=0;
	   cin>>x;
	   
	   it=m.find(x); // if not found, returns m.end();
	   if(it !=m.end())
	     cout<<it->first<<" is "<<it->second<<" times present "<<endl;
	  
	return 0;
}