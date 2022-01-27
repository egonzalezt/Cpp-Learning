/*
* Linear search
* A linear search is the simplest method of searching a data set.
*
* Starting at the beginning of the data set, each item of data is examined until a match is made. 
* Once the item is found, the search ends. If there is no match, the algorithm must deal with this.
*/


#include<iostream>
using namespace std;

int main()
{
 	int A[10],n=10;
	int key;
	cout<<"Enter Numbers "<<endl;
	    
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter Key ";
	cin>>key;
	    
	for(int i=0;i<n;i++)
	{
		if(key==A[i])
		{
			cout<<"Found at -> "<<i;
			return 0;
		}
	}
	    
	cout<<"Not Found";
	
	return 0;
	    
}		
