#include <iostream> 
#include <vector> 
#include <string> 
using namespace std; 

int main(){
    
    string s1("New"); 
    string s2("York"); 
    cout << "The first character in s1 is " << s1.operator[](0) << " or " << s1[0] << endl; 
    
    cout << "s1 + s2 is " << operator+(s1,s2) << " or " << (s1+s2) << endl; 
    cout << "s1 < s2 is " << operator<(s1,s2) << " or " << (s1<s2) << endl; 

    
    vector<int> v; 
    
    v.push_back(3);
    v.push_back(5); 
    cout << "The element in v is " << v.operator[](0) << " or " << v[1] << endl; 
    cout << "s1 - s2 is " << v-=5 << endl;
    
    
    system("pause"); 
    return 0; 
    
}
