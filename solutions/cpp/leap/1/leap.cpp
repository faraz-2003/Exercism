#include "leap.h"

namespace leap {

    bool is_leap_year(int year) {
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    return true;
                } else {
                    return false;
                }
            } else { // This is the `else` for `if(year%100==0)`
                return true;
            }
        } else { // This is the `else` for `if(year%4==0)`
            return false;
        }
    }

}  // namespace leap
