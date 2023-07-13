#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

float result = 0;
float inputNumber = 0;
float firstNum, secondNum = -1;

//print the calculator on the screen
// This Calculator only do 2 numbers calculations

void printCalc(){

    cout << "-------------------" << endl;
    cout << "|                 |" << endl;
    cout << "|          " << result << "      |" << endl;
    cout << "-------------------" << endl;
    cout << "| % | CE | C | DEL|" << endl;
    cout << "-------------------" << endl;
    cout << "| sqr | pow | x/x |" << endl;
    cout << "-------------------" << endl;
    cout << "| 7  | 8  | 9 | * |" << endl;
    cout << "-------------------" << endl;
    cout << "| 4  | 5  | 6 | - |" << endl;
    cout << "-------------------" << endl;
    cout << "| 1  | 2  | 3 | + |" << endl;
    cout << "-------------------" << endl;
    cout << "| 0  |.  | 0  | = |" << endl;
    cout << "-------------------" << endl;

}

//create the functions for every key in the calc

//percentage
void percentege(){
    // input the value you want to know the percentage
    // and then add the total percentage

    result = (firstNum/secondNum)*100;

}
//divide
void division(){

    result = firstNum/secondNum;
}
// multiplication
void multiplying(){

    result = firstNum*secondNum;

}
//minus
void subtract(){

    result  = firstNum - secondNum;

}
//add
void adding(){

    result = firstNum + secondNum;

}
// square root
void sqroot(){

    result = sqrt(secondNum);
}

// powered by two
void powered(){

    result  = pow(secondNum, 2);

}

//Input Numbers
void inputNum(){


    for(int i = 0; i < 2; ++i){

        cout << " Type a number between 0 and 9" << endl;
        cin >> inputNumber;

        if(i == 0){
            firstNum = inputNumber;
        }else {
            secondNum = inputNumber;
        }
    }

}

// Switch case to choose what action the user will want to do
void actionList(){

    cout << "What action do want to do?" << endl;
    cout << "0) Skip action" << endl;
    cout << "1) % " << endl;
    cout << "2) / " << endl;
    cout << "3) * " << endl;
    cout << "4) - " << endl;
    cout << "5) + " << endl;
    cout << "6) sqr " << endl;
    cout << "7) pow " << endl;

    int checkAction = 0;
    cin >> checkAction;



    switch (checkAction){
        case 0:
            cout << "skipped" << endl;
        case 1:
            percentege();
            break;
        case 2:
            division();
            break;
        case 3:
            multiplying();
            break;
        case 4:
            subtract();
            break;
        case 5:
            adding();
            break;
        case 6:
            sqroot();
            break;
        case 7:
            powered();
            break;

    }

}

bool calcEnd(){
    if(firstNum == 0 && secondNum == 0){
        return false;
    }
    return true;
}


int main() {


    while(calcEnd()){
        printCalc();
        inputNum();
        actionList();
        calcEnd();
        if(calcEnd())continue;
        system("CLS");
    }



    return 0;
}
