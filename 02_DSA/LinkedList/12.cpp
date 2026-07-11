//https://leetcode.com/problems/lru-cache/description/

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

class LRUCache{
public:
    class Node{
    public:
        int key;
        int val;
        Node* next;
        Node* prev;

        Node(int k, int v){
            key = k;
            val = v;
            next = NULL;
            prev = NULL;
        }
    };

    unordered_map<int, Node*> cache;
    int cap;

    Node* head;
    Node* tail;

    void addTofront(Node* node){
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }

    void removeNode(Node* node){
        Node* left = node->prev;
        Node* right = node->next;

        left->next = right;
        right->prev = left;
    }

    void moveToFront(Node* node){
        removeNode(node);
        addTofront(node);
    }

    LRUCache(int capacity){
        cap = capacity;

        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    int get(int key){
        if(cache.find(key) == cache.end())
            return -1;

        Node* node = cache[key];
        moveToFront(node);

        return node->val;
    }

    void put(int key, int val){
        if(cache.find(key) != cache.end()){
            Node* node = cache[key];
            node->val = val;

            moveToFront(node);
            return;
        }

        if(cache.size() == cap){
            Node* node = tail->prev;
            cache.erase(node->key);

            removeNode(node);
            delete node;
        }

        Node* node = new Node(key, val);
        cache[key] = node;
        addTofront(node);
    }
};