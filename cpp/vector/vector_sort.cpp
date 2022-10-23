#include <iostream>
#include <vector>
using namespace std;
  
int main()
{
    vector<int> v{ 1, 5, 8, 9, 16, 72, 3, 4, 2, 0 };
  
    sort(v.begin(), v.end());
  
    cout << "Sorted \n";
    for (auto x : v)
        cout << x << " ";
  
    return 0;
}
