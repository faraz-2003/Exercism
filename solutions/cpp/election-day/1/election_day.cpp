#include <string>
#include <vector>

namespace election {

// The election result struct is already created for you:

struct ElectionResult {
    // Name of the candidate
    std::string name{};
    // Number of votes the candidate has
    int votes{};
};

// TODO: Task 1
// vote_count takes a reference to an `ElectionResult` as an argument and will
// return the number of votes in the `ElectionResult.
int vote_count(ElectionResult a){
    return a.votes;
}

// TODO: Task 2
// increment_vote_count takes a reference to an `ElectionResult` as an argument
// and a number of votes (int), and will increment the `ElectionResult` by that
// number of votes.
void increment_vote_count(ElectionResult& a, int temp){
    a.votes = a.votes + temp;
}

// TODO: Task 3
// determine_result receives the reference to a final_count and returns a
// reference to the `ElectionResult` of the new president. It also changes the
// name of the winner by prefixing it with "President". The final count is given
// in the form of a `reference` to `std::vector<ElectionResult>`, a vector with
// `ElectionResults` of all the participating candidates.
ElectionResult& determine_result(std::vector<ElectionResult>& final_count){

    // Use a reference to find the winner
    ElectionResult* winner_ptr = &final_count[0];
    for (auto& candidate : final_count) {
        if (candidate.votes > winner_ptr->votes) {
            winner_ptr = &candidate;
        }
    }
    
    // Modify the winner's name
    winner_ptr->name = "President " + winner_ptr->name;

    return *winner_ptr;
}

}  // namespace election
