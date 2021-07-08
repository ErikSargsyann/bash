#include <iostream>
using namespace std;


int row = 5;
int col = 5;

int top = 0;
int topSum;

////////////////
void display(int n[5][5]){
   cout << "5x5 matrix \n " << endl;
   for(int i = 0; i < row; i++) {
       for(int j = 0; j < col; j++) {
            cout  << "[" << n[i][j] <<"]";        
            
        }
        cout << endl;
    }

   for(int i = 1; i < row - 1; i++) {
       for(int j = i; j < col; j++) {
            top = top + n[i][j];
            
       }
       cout << endl;
    }

    cout <<"TOP = " << top << endl;


    /////////// to binary

    int a[10],  i;    
    for(i=0; top>0; i++){    
        a[i]=top%2;    
        top= top/2;  
    }    
    
    cout <<"Binary sum  of the TOP = "; 
    for(i=i-1 ;i>=0 ;i--){   
        topSum = a[i];
        cout << topSum; 

        ////////// change 
    }
    cout << endl;


   cout << "5x5 matrix \n " << endl;
   for(int i = 0; i < row; i++) {
       for(int j = 0; j < col; j++) {
            cout  << "[" << n[i][j] <<"]";        
            
        }
        cout << endl;
    }

    /////// change matrix to 0 and 1


/*
   for(int i = 1; i < row - 1; i++) {
       for(int j = i; j < col; j++) {
            n[i][j] = topSum; 
            cout  << "[" << n[i][j] <<"]";        
       }
       cout << endl;
    }*/
    




} 



int main() {  
        
	int myArray[5][5] = 
	{
		{1,2,3,4,5},
		{2,3,4,7,5},
		{3,5,3,5,8},
		{4,4,6,8,1},
		{5,3,3,3,3,}
	};
	display(myArray);
   // toBinary(top);
//    finish(myArray);
    return 0;
}  



