#include <iostream>
using namespace std;

class BadDynamicArray(){

private:
    int* data;            //int[] in Java
                          // pointer does not know how long the block of memory is
    //unint32_t size;
    unint32_t capacity;


public:
    BadDynamicArray()
    unint64_t len() const { return 0; }
    void addEnd(int v){}
    void addFirst(int v) {}

    //insert after position pos
    void insert(unint64_t int pos, int v)

};

int main (){
    BadDynamicArray a1; //empty, preallocated space? 0
    cout << a1.len() << '\n';
    a1.addEnd(3);
    constexpr unint32_t n = 10;
    for (int i = 1; i <=n; i++){
        a1.addEnd(i);
        a1.addFirst(9);
        a1.insert(5, -3);
        cout << a1 << endl;
        a1.removeEnd();
        a1.removeFirst()
        a1.remove(3);           // these are the fundamentals for list functions
        int v = a1[3]; 
        a1.set(4,-5);   
        a1[4]=5;


    }



}