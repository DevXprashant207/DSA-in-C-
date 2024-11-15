#include<iostream>
#include<climits>
using namespace std;
class Node{
public:
     int  val;
     Node* left;
     Node* right;
     Node(int val){
          this->val = val;
          this->left = NULL;
          this->right = NULL;
     }
};
void display(Node* root){
     if(root==NULL) return;
     cout<<root->val<<" ";
     display(root->left);
     display(root->right);
}
int mn(Node* root){
     if(root==NULL) return INT_MAX;
     return min(root->val,min(mn(root->left),mn(root->right)));
}
int main(){
     Node* a = new Node(1);
     Node* b = new Node(2);
     Node* c = new Node(3);
     Node* d = new Node(4);
     Node* e = new Node(-35);
     Node* f = new Node(6);
     Node* g = new Node(7);
     Node* h = new Node(8);
     Node* i = new Node(9);
     Node* j = new Node(10);

     a->left = b;
     a->right = c;
     b->left = d;
     b->right = e;
     c->left = f;
     c->right = g;
     d->left = j;
     d->right = i;
     e->left = h;
     
    cout<<mn(a);

}