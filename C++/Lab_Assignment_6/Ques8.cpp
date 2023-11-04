/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/
    vector<int> arr;
    int idx = 0;

    void inOrder(Node *root) {
        if (root->left != NULL){inOrder(root->left);}
        arr.push_back(root->data);
        idx++;
        if (root->right != NULL){inOrder(root->right);}
    }

    bool checkBST(Node* root) {
        if (root->left == nullptr && root->right == nullptr){return true;}
        inOrder(root);
        int tmpIdx = 0;
        while(idx != 1){
            if (arr[tmpIdx] >= arr[tmpIdx + 1]){return false;}
            tmpIdx++;
            idx--;
        }
        return true;
    }