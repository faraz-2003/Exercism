#include "vehicle_purchase.h"

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    // TODO: Return true if you need a license for that kind of vehicle.
    if(kind == "car" || kind == "truck"){
        return true;
    } else {
        return false;
    }
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    // TODO: Return the final decision in a sentence.
    int l{0};
    std::string temp{" is clearly the better choice."};
    if (option1.length() < option2.length()){
        l = option1.length();
    }else{
        l = option2.length();
    }
    for(int i =0;i<l;i++){
        if(option1[i]==option2[i]){
             continue;
        }
        if(option1[i]<option2[i]){
            return option1 + temp;
        }else{
            return option2 + temp;
        }
    }
    
    return "not yet implemented";
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    // TODO: Return the age-corrected resell price.
    if (age < 3){
        return original_price * 0.80;
    } else if( age > 3 and age < 10){
        return original_price * 0.70;
    } else{
        return original_price * 0.50;
    }
}

}  // namespace vehicle_purchase
