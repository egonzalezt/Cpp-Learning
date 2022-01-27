# include<iostream>
using namespace std;
    
/*program for draw another pattern 3 using nested for loop

*/
int main()
{
	for(int i=4;i>0;i--)
	{
	    for(int j=4;j>0;j--)
	    {
            if(i>=j)
		        cout<<"*";
	    }
	    cout<<endl;
	}
	return 0;
}