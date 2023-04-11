#include <iostream>
#include "Questionary.h"

using namespace std;

int main()
{
    int num_quest = 3;

    Questionary Exam1(num_quest);

    Exam1.set_correct_answers();
    Exam1.set_students_answers();


    cout<<endl<<"Correct Answers for Exam 1"<<endl;
    Exam1.print_correct_answers();

    cout<<endl<<"Student Answers for Exam 1"<<endl;
    Exam1.print_student_answers();


    // cout<<"\nShallow Copy example:"<<endl;
    // Questionary Exam2;

    // Exam2 = Exam1; //shallow copy

    // cout <<"\nExam2: " <<endl;
    // Exam2.set_correct_answers();
    // Exam2.set_students_answers();

    // cout<<endl<<"Correct Answers for Exam 1"<<endl;
    // Exam1.print_correct_answers();

    // cout<<endl<<"Student Answers for Exam 1"<<endl;
    // Exam1.print_student_answers();


    cout << "\nDeep Copy example:"<<endl;

    Questionary Exam3(Exam1);

    cout <<"\nExam3: " <<endl;
    Exam3.set_correct_answers();
    Exam3.set_students_answers();

    cout<<endl<<"Correct Answers for Exam 1"<<endl;
    Exam1.print_correct_answers();

    cout<<endl<<"Student Answers for Exam 1"<<endl;
    Exam1.print_student_answers();

    return 0;
}//main