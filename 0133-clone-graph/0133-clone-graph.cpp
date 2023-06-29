/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node)
            return node;
        queue <Node*> qu;
        queue <Node*> qu_temp;
        map <Node*, int> hash;
        map <Node*, Node*> same;
        Node *ans = new Node(node->val);
        same[node] = ans;
        hash[node] = 1;
        qu.push(node);
        qu_temp.push(ans);
        while(!qu.empty()){
            
            Node* temp = qu.front();
            qu.pop();
            //new value
            Node* parent = qu_temp.front();
            // cout << temp->val << endl;
            qu_temp.pop();
            same[temp] = parent;
            vector<Node*> neighbors = temp->neighbors;
            for(auto neighbor : neighbors){
                Node* child = NULL;
                if(same[neighbor])
                    child = same[neighbor];
                else{
                    child = new Node(neighbor->val);
                    same[neighbor] = child;
                }

                (parent->neighbors).push_back(child);
                if(hash[neighbor] == 1)
                    continue;
                hash[neighbor] = 1;
                qu.push(neighbor);
                qu_temp.push(child);
                
            }
            cout << endl;
                
        }
        
                return ans;
    }
};