class Node {
public: 
    int key;
    int val; 
    Node* next; 
    Node* prev;

    Node(int key, int val, Node* prev, Node* next) {
        this->key = key;
        this->val = val;
        this->next = next;
        this->prev = prev;
    }

    int get() {
        return val;
    }
};   


class LRUCache {
public:
    unordered_map<int, Node*> nodes;
    Node* head; // least recent
    Node* tail; // recent
    int size, capacity;

    void add(int key, int val) {
        Node* n = new Node(key, val, 0, 0);
        nodes[key] = n;

        if(!head) {
            head = tail = n;
        } else {
            tail->next = n;
            n->prev = tail; 
            tail = n;
        }
        size++;
    }

    void removeLRU() {
        Node* tmp = head;
        nodes.erase(tmp->key);
        
        head = head->next;
        if(head) head->prev = 0; 
        if(!head) tail = 0;
        
        tmp->next = 0; 
        delete tmp;
        size--;
    }


    void moveToEnd(int key) {
        Node* toMove = nodes[key];
        if(toMove == tail) return;

        if(toMove == head) head = head->next;
        if(toMove->prev) toMove->prev->next = toMove->next;
        if(toMove->next) toMove->next->prev = toMove->prev;
        
        toMove->next = 0;
        tail->next = toMove;
        toMove->prev = tail; 
        tail = toMove;
    }

  
    void modify(int key, int val) {
        if(nodes.count(key))
            nodes[key]->val = val;
    }

    LRUCache(int capacity) {
        this->capacity = capacity; 
        this->size = 0; 
        this->head = this->tail = 0;
    }
    
   
    int get(int key) {
        int sol = -1;
        if(nodes.count(key)) {
            sol = nodes[key]->get();
            this->moveToEnd(key);
        }
        return sol; 
    }
    
    void put(int key, int value) {
        if(nodes.count(key)) {
            this->modify(key, value);
        } else {
            if(size == capacity) this->removeLRU();
            this->add(key, value);
        }
        this->moveToEnd(key);
    }
};
