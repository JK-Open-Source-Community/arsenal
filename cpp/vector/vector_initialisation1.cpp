#include <iostream>
#include <vector>
using namespace std;
  
int main()
{
    vector<int> vect{ 11, 2, 30 };
  
    for (int x : vect)
        cout << x << " "<<endl;
  
    return 0;
}
