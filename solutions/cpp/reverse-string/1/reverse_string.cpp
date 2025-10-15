#include "reverse_string.h"

namespace reverse_string {

// TODO: add your solution here
std::string reverse_string(std::string s){
    int l = s.size();
    for(int i=0;i<l/2;i++){
        char temp = s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=temp;
    }
    return s;
}
}  // namespace reverse_string
