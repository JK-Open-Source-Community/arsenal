#include <iostream>
#include <vector>
using namespace std;
  
int main()
{
    vector<int> vect1(103);
    int value = 5;
    fill(vect1.begin(), vect1.end(), value);
    for (int x : vect1)
        cout << x << " ";
}
