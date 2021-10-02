#include<iostream> 
using namespace std;
int main() 
{ 
#ifndef ONLINE_JUDGE 

	// For getting input from input.txt file 
	freopen("input.txt", "r", stdin); 

	// Printing the Output to output.txt file 
	freopen("output.txt", "w", stdout); 

#endif 
int T,A,B;
cin>>T;
while(T--)
{
    cin>>A>>B;
    cout<<A+B<<"\n";
}
//cout<<"Yeah!"<<x;
	return 0; 
} 
