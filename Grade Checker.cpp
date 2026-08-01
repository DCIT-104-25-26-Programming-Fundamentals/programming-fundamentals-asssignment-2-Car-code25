#include <iostream>
#include <string>

using namespace std;

string getGrade(double score)
{
    if (score >= 80 && score <= 100)
    {
        return "Grade: A";
    }
    else if (score >= 70 && score <= 79)
    {
        return "Grade: B";
    }
    else if (score >= 60 && score <= 69)
    {
        return "Grade: C";
    }
    else if (score >= 50 && score <= 59)
    {
        return "Grade: D";
    }
    else if (score >= 0 && score < 50)
    {
        return "Grade: F";
    }
    else
    {
        return "Enter a valid score.";
    }
}

int main()
{
    double score;

    cout << "================" << endl;
    cout << "GRADE CHECKER" << endl;
    cout << "================" << endl;

    cout << "Enter student score (0-100): ";
    cin >> score;

    string result = getGrade(score);

    cout << result << endl;

    return 0;
}