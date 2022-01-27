#include<iostream>
using namespace std;

void Draw(int n)
{
    //Draw Pattern given in description for n x n dimensions
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        } 
        cout<<endl;
    }
}

void Draw2(int n)
{
    
    //Draw Pattern given in description for n x n dimensions
    for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n;j++)
	    {
		    if(i>=j)
		      cout<<"* ";
            else
                break;
	    }
	    cout<<endl;
	}
}

int main(){
    Draw(4);
}

