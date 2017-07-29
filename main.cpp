#include <iostream>

template<class T>
class Node{
private:
    T data;
    Node* nextNode;
public:
    Node(){nextNode=NULL;};
};

template <class T>
class mylist{
private:
    unsigned listlength;
    Node<T>* tempnode;
    Node<T>* lastnode;
    Node<T>* headnode;
public:
    mylist();
    unsigned int length();
    void add();
    void traversal();
    bool isEmpty();
    Node<T>* find(T x);
    void Delete(T x);
    void insert(T x,Node<T>* p);//sssss

};


int main() {
//    Bucky<int> bob(56,78);
//    std::cout << bob.bigger() << std::endl;
//    return 0;
}