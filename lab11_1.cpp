// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;
// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
string graded(int grade, string &final_grade){

    switch (grade)
    {
    case 0:
        final_grade = "A";
        break;
    case 1:
        final_grade = "B+";
        break;
    case 2:
        final_grade = "B";
        break;
    case 3:
        final_grade = "C+";
        break;
    case 4:
        final_grade = "C";
        break;
    case 5:
        final_grade = "D+";
        break;
    case 6:
        final_grade = "D";
        break;
    case 7:
        final_grade = "F";
        break;
    
    default:
        final_grade = "W";
        break;
    }
    return final_grade;
}

int main(){
    int grade;
    string final_grade;
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    grade = rand()%9;
    graded(grade,final_grade);
    cout << "You will get " << final_grade << " in this 261102.";
    return 0;
}