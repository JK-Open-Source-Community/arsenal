class Solution {
public:
    bool isPalindrome(long int x) {
        long int num = x;
        long int out = 0;
        if(num < 0){
            return 0;
        }
        while(1)
        {
        out = out*10 + (x%10);
         x = x/10;
         if(x == 0)
         {
             break;
         }
        }
         cout << out;
    return (num==out);
    }
};
