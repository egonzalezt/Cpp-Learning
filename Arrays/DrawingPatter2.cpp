# include<iostream>
using namespace std;
    
/*program for draw pattern 2 using nested for loop

matrix structure


j   j   j   j

i

i

i
*/

void draw(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void draw2(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i)+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void draw3(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i+j>n){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void draw4(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i<=j){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
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
		    if(i>=j)
		      cout<<"* ";
            else
                break;
	    }
	    cout<<endl;
	}

    draw4(10);
	return 0;
}