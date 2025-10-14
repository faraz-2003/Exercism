namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
    enum class AccountStatus{
    troll,
    guest,
    user,
    mod
    };

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
    enum class Action{
    read,
    write,
    remove
    };

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
    bool display_post(AccountStatus a, AccountStatus b){
        if(a==AccountStatus::troll){
            if(b==AccountStatus::troll){
                return true;
            }else{
                return false;
            }
        }
        return true;
    }

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
    bool permission_check(Action a, AccountStatus b){
        switch(b){
            case AccountStatus::guest:
                if(a==Action::read){
                    return true;
                }else{
                    return false;
                }
            case AccountStatus::user:
            case AccountStatus::troll:
                if(a == Action::remove){
                    return false;
                }else{
                    return true;
                }
                break;
            default:
                return true;
        }
    }
// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
    bool valid_player_combination(AccountStatus p1, AccountStatus p2) {
    if (p1 == AccountStatus::guest || p2 == AccountStatus::guest) {
        return false;
    }

    if (p1 == AccountStatus::troll) {
        return p2 == AccountStatus::troll;
    }
    
    if (p2 == AccountStatus::troll) {
        return p1 == AccountStatus::troll;
    }

    // All other combinations (user, mod) are valid
    return true;
}

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
    bool has_priority(AccountStatus a, AccountStatus b) {
    if (a == b) {
        return false; // Cannot have strictly higher priority over yourself
    }

    if (a == AccountStatus::mod) return true;
    if (a == AccountStatus::user) return b != AccountStatus::mod;
    if (a == AccountStatus::guest) return b == AccountStatus::troll;
    
    return false; // Troll has lowest priority
}
}  // namespace hellmath
