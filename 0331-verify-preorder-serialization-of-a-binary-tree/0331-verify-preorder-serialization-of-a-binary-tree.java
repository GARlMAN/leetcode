class Solution {
    public boolean isValidSerialization(String preorder) {
        String[] nodes = preorder.split(",");
        int v = 1;
        for(int i = 0; i < nodes.length; ++i){
            v--;
            if(v < 0)
                return false;
            if(!nodes[i].equals("#") ){
                System.out.println(nodes[i]);
                 v += 2;
            }
               
            
        }
        return v == 0;
    }
}