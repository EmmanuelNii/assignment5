#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int id[5], age[5], i;
    string name[100];
    char gender[5], grade[5];
    float score[5], a = 0.0, sc = 0.0;


    for (i = 1; i <= 5; i++)
    {
         cout<<"Enter student"<<i<<" ID: ";
        cin>>id[i];
        cout<<"Enter student"<<i<<" name: ";
        cin>>name[i];
        cout<<"Enter student"<<i<<" age: ";
        cin>>age[i];
        cout<<"Enter student"<<i<<" gender: ";
        cin>>gender[i];
        cout<<"Enter student"<<i<<" score: ";
        cin>>score[i];
        cout<<"Enter student"<<i<<" grade: ";
        cin>>grade[i];
        cout<<"\n";
        a +=age[i];
        sc += score[i];
    }


    ofstream std;
    std.open("newfile.txt");
    std<<"ID"<<"\t\tName"<<"\t\tAge"<<"\t\tGender"<<"\t\tScore"<<"\t\tGrade"<<endl;
    for(int j = 1;j<=5; j++)
    {
        std<<id[j]<<"\t\t"<<name[j]<<"\t\t"<<age[j]<<"\t\t"<<gender[j]<<"\t\t"<<score[j]<<"\t\t"<<grade[j]<<endl;
    }
    std<<"\nAverage age: "<<a/5<<"\nAverage score: "<<sc/5;
    return 0;
}
