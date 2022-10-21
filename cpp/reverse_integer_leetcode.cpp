class Solution {
public:
    int reverse(int x) {
        int out=0;
        
        while(1){
            if (abs(out)>=(pow(2,31)-1)/10) return 0;
            out = out*10 + x%10;
            x=x/10;
            if (x==0)
                return out;
        }
        return 0;
    }
};
