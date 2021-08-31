///*
// * To find length of largest substring
// * with non repeating character
// * for a given string(sliding window)
// */
//
//#include <iostream>
//using namespace std;
//
//int main(){
//    string s;
//    cout<<"Enter string:"<<endl;
//    cin>>s;
//
//    int current_len=1;
//    int max_len=1;
//    int visited[256];
//
//    for (int i = 0; i < 256; ++i) {
//        visited[i]=-1;
//    }
//
//    visited[s[0]]=0;
//
//    for (int i = 1; i < s.length(); ++i) {
//        int last_occ=visited[s[i]];
//
//        // Expansion
//        if(last_occ==-1 || i-current_len>last_occ){
//            current_len++;
//            max_len=max(max_len,current_len);
//        }
//        // Expansion + Contraction
//        else{
//            if(current_len>max_len){
//                max_len=current_len;
//            }
//            current_len=i-last_occ;
//        }
//
//        visited[s[i]]=i;
//    }
//
//    cout<<"max len:"<<max_len<<endl;
//    return 0;
//}
//
///*
//OUTPUT:
//Enter string:
//abccdefghd
//max len:6
// */