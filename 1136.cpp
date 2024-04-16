#include <iostream>
#include <iomanip>
using namespace std;
int sk[3000];
int l = -1;
struct tnode {
    int field;           
    struct tnode* left;  
    struct tnode* right; 
};
void treeprint(tnode* tree) {
    
    if (tree != NULL) { 
        l++;
        sk[l] = tree->field; 
        treeprint(tree->left); 
        treeprint(tree->right); 
    }
}
struct tnode* addnode(int x, tnode* tree) {
    if (tree == NULL) { 
        tree = new tnode; 
        tree->field = x;  
        tree->left = NULL;
        tree->right = NULL; 
    }
    else  if (x < tree->field)   
        tree->left = addnode(x, tree->left);
    else    
        tree->right = addnode(x, tree->right);
    return(tree);
}
void freemem(tnode* tree) {
    if (tree != NULL) {
        freemem(tree->left);
        freemem(tree->right);
        delete tree;
    }
}

int main()
{
    struct tnode* root = 0;
    int a,r;
    cin >> r;
    int* fr = new int[r];
    for (int i = 0; i < r; i++)
        cin >> fr[i];
    a = fr[r - 1];
    root = addnode(a, root);
    for (int i = r-2; i >=0; i--)
    {
        a=fr[i];
        root = addnode(a, root);
    }
    treeprint(root);
    freemem(root);
    for (int i = r - 1; i >= 0; i--)
        cout << sk[i] << endl;
    return 0;
}
