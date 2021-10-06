<h3>0/1 Knapsack Problem</h3>


```                                                        
class Knapsack 
{ 
    // Returns the maximum value that can be put in a knapsack of capacity W 
    static int knapSack(int W, int wt[], int val[], int n) 
    { 
         // your code here 
         if(n==0 || W==0)
         return 0;
         
         if(wt[n-1]>W){
            return knapSack(W,wt,val,n-1);
         }
         else{
             return Math.max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));
         }
    } 
}
```

<b>Time complexity= O(2^n)</b>


<b>Using Dynamic Programming-</b>

```
class Knapsack 
{ 
    // Returns the maximum value that can be put in a knapsack of capacity W 
    static int knapSack(int W, int wt[], int val[], int n) 
    { 
         // your code here 
         int i,w;
        int k[][]=new int[n+1][W+1];
         for(i=0;i<=n;i++){
             for(w=0;w<=W;w++){
                 if(i==0 || w==0)
                 k[i][w]= 0;
         
                 else if(wt[i-1]>w){
                    k[i][w]= k[i-1][w];
                 }
                 else{
                    k[i][w]= Math.max(val[i-1]+k[i-1][w-wt[i-1]] ,k[i-1][w] );
                 }
             }
         }
         return k[n][W];
    } 
}
```
<b>Time complexity= O(n*W)</b>
