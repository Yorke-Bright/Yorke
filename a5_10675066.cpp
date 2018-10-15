

#include <iostream>
#include<fstream>
using namespace std;

struct student{
string id;
string name;
int age;
char gender;
char grade;
int score;

};

int main()
{
ofstream yorke;
yorke.open("maily.txt");

double avgAge, avgScore;

yorke<<"id "<<"name "<<"age "<<"gender "<<"grade "<<"score "<<endl;

student valid[5];

for(int k=0; k<5; k++)
{
cout<<"enter student id     ";
cin>>valid[k].id;

cout<<"enter student name   ";
cin>>valid[k].name;

cout<<"enter student age    ";
cin>>valid[k].age;

cout<<"enter student gender     ";
cin>>valid[k].gender;

cout<<"enter student score      ";
cin>>valid[k].score;

avgAge += valid[k].age;
avgScore += valid[k].score;

cout<<endl<<endl;

if(valid[k].score>=80 && valid[k].score<=100)
    {
     valid[k].grade='A';
    }

    else if (valid[k].score>=70 && valid[k].score<80)
    {
            valid[k].grade='B';
    }

    else if (valid[k].score>=60 && valid[k].score<70)
    {
    valid[k].grade='C';
    }
    else if (valid[k].score>=50 && valid[k].score<60)
    {
    valid[k].grade='D';
    }

    else if (valid[k].score>=40 && valid[k].score<50)
    {
    valid[k].grade='E';
    }

    else if (valid[k].score>=0 && valid[k].score<40)
    {
    valid[k].grade='F';
    }

yorke<<k+1<<". "<<valid[k].id<<" "<<valid[k].name<<" "<<valid[k].gender<<" "<<valid[k].age<<" "<<valid[k].score<<endl;

}

yorke<<"average age= "<<avgAge/5<<endl;
yorke<<"average score= "<<avgScore/5<<endl;


    return 0;
}
