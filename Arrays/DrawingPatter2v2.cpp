# include<iostream>
using namespace std;
    
/*program for draw another pattern 2 using nested for loop
*/

void Draw(int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}

int main()
{
	for(int i=0;i<4;i++)
	{
	    for(int j=0;j<4;j++)
	    {
		    if(i>j)
		      cout<<" ";
		    else
		      cout<<"*";
	    }
	    cout<<endl;
	}
	return 0;
}