# include<iostream>
using namespace std;
    
/*program for draw pattern 2 using nested for loop

*/
int main()
{
	for(int i=0;i<4;i++)
	{
	    for(int j=4;j>=0;j--)
	    {
		    if(j>i)
		        cout<<"  ";
            else
                cout<<"* ";
	    }
	    cout<<endl;
	}
	return 0;
}