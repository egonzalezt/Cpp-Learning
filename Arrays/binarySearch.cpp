#include<iostream>
using namespace std;
    
/*
* To use binary search it is important to have an ordered array because binary search acts like divide and conquer algorithm
* Binary Search is a searching algorithm for finding an element's position in a sorted array.
* In this approach, the element is always searched in the middle of a portion of an array.
* Binary search can be implemented only on a sorted list of items. If the elements are not sorted already, we need to sort them first.
*/

int main()
{
    int A[10]={6,8,13,17,20,22,25,28,30,35};
 	int l=0,h=9,key,mid;
	cout<<"Enter the Key";
	cin>>key;
	    
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==A[mid])
		{
			cout<<"Found at"<<mid;
			return 0;
		}
		else if(key<A[mid])
			h=mid-l;
		else
			l=mid+l;
	}
	    
	cout<<"Not Found";
	
	return 0;
	    
}