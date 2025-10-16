#include "space_age.h"

namespace space_age {
    constexpr double EARTH_YEAR_IN_SECONDS = 31557600.0;
    constexpr double MERCURY_RATIO         = 0.2408467;
    constexpr double VENUS_RATIO           = 0.61519726;
    constexpr double MARS_RATIO            = 1.8808158;
    constexpr double JUPITER_RATIO         = 11.862615;
    constexpr double SATURN_RATIO          = 29.447498;
    constexpr double URANUS_RATIO          = 84.016846;
    constexpr double NEPTUNE_RATIO         = 164.79132;

    // Class constructor
    space_age::space_age(std::int64_t seconds) : total_seconds(seconds) {}

    // Public method to return total seconds
    std::int64_t space_age::seconds() const {
        return total_seconds;
    }

    // Public methods to calculate age on each planet
    double space_age::on_earth() const {
        return total_seconds / EARTH_YEAR_IN_SECONDS;
    }

    double space_age::on_mercury() const {
        return on_earth() / MERCURY_RATIO;
    }

    double space_age::on_venus() const {
        return on_earth() / VENUS_RATIO;
    }

    double space_age::on_mars() const {
        return on_earth() / MARS_RATIO;
    }

    double space_age::on_jupiter() const {
        return on_earth() / JUPITER_RATIO;
    }

    double space_age::on_saturn() const {
        return on_earth() / SATURN_RATIO;
    }

    double space_age::on_uranus() const {
        return on_earth() / URANUS_RATIO;
    }

    double space_age::on_neptune() const {
        return on_earth() / NEPTUNE_RATIO;
    }

}  // namespace space_age
