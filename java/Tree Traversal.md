<h3> In-order tree traversal </h3>

```
void help(Node root,ArrayList<Integer>list)
    {
        if(root==null)
        return;
        help(root.left,list);
        list.add(root.data);
        help(root.right,list);
    }
    ArrayList<Integer> inOrder(Node root)
    {
        // Code
        ArrayList<Integer>list=new ArrayList<>();
        help(root,list);
        return list;
    } 
```
  
  <h3> Post-order tree traversal </h3>
  
  ```
  void help(Node root,ArrayList<Integer>list)
    {
        if(root==null)
        return;
        help(root.left,list);
        help(root.right,list);
        list.add(root.data);
    }
    ArrayList<Integer> postOrder(Node root)
    {
       // Your code goes here
       ArrayList<Integer>list=new ArrayList<>();
       help(root,list);
       return list;
    }
   ```
    
  <h3> Pre-order tree traversal </h3>
  
  ```
  void help(Node root,ArrayList<Integer>list)
    {
        if(root==null)
        return;
        list.add(root.data);
        help(root.left,list);
        help(root.right,list);   
    }
    ArrayList<Integer> preOrder(Node root)
    {
       // Your code goes here
       ArrayList<Integer>list=new ArrayList<>();
       help(root,list);
       return list;
    }
   ```
