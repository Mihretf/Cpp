// Input a student’s score and print:
// 90–100 → A
// 80–89 → B
// 70–79 → C
// 60–69 → D
// Below 60 → F

# include <iostream>
using namespace std;

int main (){
    int score;

    cout << "Please enter your score: ";
    cin >> score;

    if(score >=90 && score<=100){
        cout << "A";
    }else if(score >=80 && score <= 89){
        cout <<"B";
    }else if (score >= 70 && score <= 79){
        cout << "C";
    }else if(score >= 60 && score <= 69){
        cout <<"D";
    }else if (score <60){
        cout <<"F";
    }
    return 0;

}