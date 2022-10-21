class Solution {
public:
    string addBinary(string a, string b) {
        
        int lenA = a.length()-1; 
        int lenB = b.length()-1;
        int i = (lenA>lenB)? lenA: lenB;
        string c = "";
        
        //cout<< '1' + c; 
        int carry = 0;
        //i = 2;
        //cout << (a[0] == '1');
       while(i>=0 || carry > 0){
            int sum = 0;
            if (lenA >= 0 && a[lenA] == '1') sum += 1;
            if (lenB >= 0 && b[lenB] == '1') sum += 1;
            
            c = ((sum + carry) % 2 > 0 ? '1': '0') + c;
            if (sum + carry > 1) carry = 1; else carry = 0;
            cout <<"sum:"<<sum<<" carry:"<<carry<<" c:"<<c<<endl;
            i--;

if(i == -1 && carry == 1) { 
        cout <<"i:"<<i<<endl;
    
    c = '1' + c; break; }
        // cout <<"i:"<<i<<endl;
        // cout <<"carry:"<<carry<<endl;

            lenA--;
            lenB--;
        }

return c;
    }
};
