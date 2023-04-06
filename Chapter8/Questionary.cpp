#include "Questionary.h"


Questionary::Questionary(int size)
{
    num_questions = size;
    student_answers = new char[num_questions];
    correct_answers = new char[num_questions];
}