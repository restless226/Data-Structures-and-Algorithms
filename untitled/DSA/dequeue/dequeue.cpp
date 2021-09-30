//
///*
// * deque - "Double Ended Queue"
// * 'indexed sequence container'
// * fast insertion at both beginning and end
// * it has 'push_front()' and 'push_back()' as well as 'pop_front()' and 'pop_back()'
// * Unlike vector, elements of dequeue are not stored contiguous
// * it uses 'individual allocated fixed size array' , with index based access to dequeue
// * it performs 'two-pointer dereference' unlike 'one-pointer dereference' in vector
// * storage of dequeue is automatically expanded and contracted as needed
// * expansion of dequeue is cheaper than expansion of vector
// * incase of insertion in a vector vector with all filled elements,
//   vector expands to 'double its size' and copies all previous elements which is a bad
// * incase of dequeue, we will just append a new array into dequeue, and we are not copying
//   any elements
// * a dequeue holding just one element has to allocate its full internal array
//   (eg: 8 times object size on 64 bit libstdc++)
//* TIME COMPELXITY:
// * Random access(search) : O(1)
// * Insertion or removal of elements at end/start : constant O(1)
// * Insertion or removal of elements in between : linear O(n)
//
//
// */
//
//
//
//#include <iostream>
//#include <deque>
//using namespace std;
//
//int main(){
//    deque<int> deque={2,3,4};
//
//    deque.push_front(1);
//    deque.push_back(5);
//
//    for(auto itr:deque){
//        cout<<itr<<" ";
//    }
//    cout<<endl;
//
//    deque.pop_front();
//    deque.pop_back();
//
//    for(auto itr:deque){
//        cout<<itr<<" ";
//    }
//    cout<<endl;
//
//    return 0;
//}