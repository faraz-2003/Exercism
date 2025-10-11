#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> temp;
    for(double a: student_scores){
        temp.push_back(static_cast<int>(a));
    }
    return temp;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int i=0;
    for(auto a:student_scores){
        if(a<=40){
            i=i+1;
        }
    }
    return i;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<int, 4> temp;
    int thresh{((highest_score - 40)/4)}, dem{41}; 
    
    for(int i=0;i<4;i++){
        temp[i] = dem;
        dem = dem + thresh;
    }
    return temp;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> temp(student_scores.size());
    for(int i=0;i<student_scores.size();i++){
        temp[i] = std::to_string(i+1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]); 
    }
    return temp;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for(int i=0;i<student_scores.size();i++){
        if(student_scores[i]==100){
            return student_names[i];
        }
    }
    return "";
}
