#pragma once

#include <cstdint> // Use C-style header for C++ compatibility

namespace space_age {

class space_age {
private:
    std::int64_t total_seconds;

public:
    explicit space_age(std::int64_t seconds);

    std::int64_t seconds() const;
    double on_earth() const;
    double on_mercury() const;
    double on_venus() const;
    double on_mars() const;
    double on_jupiter() const;
    double on_saturn() const;
    double on_uranus() const;
    double on_neptune() const;
};

}  // namespace space_age
