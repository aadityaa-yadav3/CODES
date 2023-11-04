#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void topView(Node* root) {
        map<int, Node*> viewMap;
        queue<pair<Node*, int>> nodeQueue;
        nodeQueue.push({root, 0});

        while (!nodeQueue.empty()) {
            int queueSize = nodeQueue.size();
            while (queueSize--) {
                int horizontalDistance = nodeQueue.front().second;
                Node* currentNode = nodeQueue.front().first;
                if (currentNode->left) {
                    nodeQueue.push({currentNode->left, horizontalDistance - 1});
                }
                if (currentNode->right) {
                    nodeQueue.push({currentNode->right, horizontalDistance + 1});
                }
                if (viewMap.find(horizontalDistance) == viewMap.end()) {
                    viewMap[horizontalDistance] = currentNode;
                }
                nodeQueue.pop();
            }
        }

        for (auto it : viewMap) {
            cout << it.second->data << " ";
        }
    }
}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
	myTree.topView(root);
    return 0;
}
