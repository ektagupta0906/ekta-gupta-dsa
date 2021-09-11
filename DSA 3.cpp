#include<iostream.h>
#include<conio.h>

using namespace std;

int main()
{   
    int m,n,A[3][3],r,c;
    cout << "2-D Array\n";  

    cout<< "Enter the number of rows and columns: \n";
    cin>>r>>c;  

    cout<<"Enter the matrix row wise \n";
    for(m=0; m<r; m++){
        for(n=0; n<c; n++){
            cin>>A[m][n];
        }
    }

    cout << "The array elements in the Row Major Order\n";    
    for(m=0; m<r; m++)
    {
        for(n=0; n<c; n++)
        {
            cout<<A[m][n]<<"  ";
            if(n==(c-1))
            cout<<"\n";   
        }
    }     
    cout << "\n\n";

    cout <<"The array elements in the Column Major Order\n";    
    for(n=0; n<c; n++)
    {
        for(m=0; m<r; m++)
        {
            cout<<A[m][n]<<"  ";
            if(m==(r-1))
            cout<<"\n";   
        }
    }
    return 0;
}
