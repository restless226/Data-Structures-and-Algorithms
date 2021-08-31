//
//// main file
//
//
//#include<iostream>
//#include "tbt.h"
//#include "tbt_impl.cpp"
//using namespace std;
//
//int main()
//{
//    cout <<"TBT Assignment"<<endl;
//
//    tbt<int> tree;
//    int choice;
//    while(true){
//        cout << "\nMenu:\n\t0.Exit\n\t1. Create root.\n\t2. Inserion.\n\t3. Inorder.\n\t4. Postorder. \n\t5. Preorder."<<endl;
//        cout << "Enter your choice : ";
//        cin >> choice;
//        if(choice!=0){
//            switch(choice){
//                case 1:
//                    tree.create_root();
//                    cout <<endl<<"The node has been created.";
//                    break;
//
//                case 2:
//                    int data;
//                    cout<<"\nEnter data to be inserted : ";
//                    cin>>data;
//                    tree.insert_node(data);
//                    cout <<endl<<data<<" has been inserted in TBT."<<endl ;
//                    break;
//
//                case 3:
//                    cout <<"Inorder Traversal: ";
//                    tree.inorder();
//                    break;
//
//                case 4:
//                    cout <<endl<<"Postorder Traversal: " ;
//                    tree.postorder();
//                    break;
//
//                case 5:
//                    cout <<endl<<"Preorder Traversal: ";
//                    tree.preorder();
//                    break;
//
//                default:
//                    cout<< "Select from the above options"<<endl;
//                    break;
//
//            }
//        }
//        else{
//            break;
//        }
//    }
//
//
//}