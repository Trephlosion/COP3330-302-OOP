#include "Questionary.h"
#include <iostream>

using namespace std;

Questionary::Questionary(int size)
{
    num_questions = size;
    student_answers = new char[num_questions];
    correct_answers = new char[num_questions];
}

Questionary::Questionary(const Questionary &obj)
{
    num_questions = obj.num_questions;
    student_answers = new char[num_questions];
    correct_answers = new char[num_questions];


    for(int index=0; index<num_questions; index++)
    {
        student_answers[index]= obj.student_answers[index];
        correct_answers[index]= obj.correct_answers[index];
    }
}

Questionary::~Questionary()
{
    delete[] student_answers;
    delete[] correct_answers;

    student_answers = nullptr;
    correct_answers = nullptr;
}

void Questionary::set_number_of_questions(int num_q)
{
    num_questions = num_q;
}


void Questionary::set_correct_answers()
{
    cout <<"Set the Correct Answers" <<endl;

    for(int index=0; index<num_questions; index++)
    {
        cout << "Write the correct answer for question #" << index+1 << ": ";
        cin >> correct_answers[index];
    }
}

void Questionary::set_students_answers()
{
    cout <<"Set the Student's Answers" <<endl;

    for(int index=0; index<num_questions; index++)
    {
        cout << "Write the student's answer for question #" << index+1 << ": ";
        cin >> student_answers[index];
    }
}

int Questionary::get_number_of_questions()
{
    return num_questions;
}

void Questionary::print_correct_answers()
{
    for (int index=0; index<num_questions; index++)
    {
        cout << "Question #"<<index+1<<": "<<correct_answers[index]<<endl;
    }
}

void Questionary::print_student_answers()
{
    for (int index=0; index<num_questions; index++)
    {
        cout << "Question #"<<index+1<<": "<<student_answers[index]<<endl;
    }
}