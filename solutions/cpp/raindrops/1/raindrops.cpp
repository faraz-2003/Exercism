#include "raindrops.h"
#include <string> 
namespace raindrops {
    std::string convert(int i){
        std::string temp{""};
        if(i%3==0){
            temp+="Pling";
        }
        if(i%5==0){
            temp+="Plang";
        }
        if(i%7==0){
            temp+="Plong";
        }
        if(temp==""){
            temp+=std::to_string(i);
        }
        return temp;
    }
// TODO: add your solution here

}  // namespace raindrops
