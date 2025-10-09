//
// Created by alif on 10/9/25.
//

#include "task_2.h"
#include <iostream>
using namespace std;

int main()
{
    string Name;
    float ScoreUTS, ScoreUAS, ScoreAssigment, FinalScore;
    char Index_score;

    cout<<"Enter Name: ";
    cin>>Name;

    cout<<"Enter Score UTS: ";
    cin>>ScoreUTS;

    cout<<"Enter Score UAS: ";
    cin>>ScoreUAS;

    cout<<"Enter Score Assigment: ";
    cin>>ScoreAssigment;

    FinalScore = (ScoreUTS * 0.30) + (ScoreUAS * 0.40) + (ScoreAssigment * 0.30);

    if(FinalScore >= 90.00)
    {
        Index_score = 'A';
    }else if(FinalScore >= 80.00)
    {
        Index_score = 'B';
    }else if(FinalScore >= 70.00)
    {
        Index_score = 'C';
    }else
    {
        Index_score = 'D';
    }

    cout <<"Nama = "<<Name<<", NILAI AKHIR = " << FinalScore<< ", Index Nilai = "<<Index_score<<endl;
}