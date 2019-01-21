//Thomas Mintun. CS4342 Project 1 Bayes Classifier. Uday Chakraborty.
//Project1 Naive Bayes classifier with for figure 5.9. I started coding in Python, and it was my first project in Python.
//I switched back to c++ after struggling with Python. The denominatior of the Bayes equation used was dropped to make
//the code simpler. The denominator stays constant I am able to do this.
#include <iostream>
using namespace std;

int main(){
    //M-estimates of all conditional smoothing. This is generalized smoothing so no zeros show up in the conditional probability
    //statements cause the whole statement to go to zero. All probabilites are greater than zero. The smoothing parameters used
    // are m=3, p=(1/3) for Yes classification, and p=(2/3) for No classification.
    double probMarYes = 0.16666666666;
    double probMarNo = 0.6;
    double probSingYes = 0.5;
    double probSingNo = 0.4;
    double probDivYes = 0.33333333333;
    double probDivNo = 0.3;
    double probYOwnerYes = 0.16666666666;
    double probYOwnerNo = 0.5;
    double probNOwnerYes = 0.33333333333;
    double probNOwnerNo = 0.6;
    
    //Classification of test1 ---> Home owner = yes, Marital status = Married,Income = 50.7K
    //YES classification probabilities P(Y|test1)=P(Y)*P(homeowner=Y|Y)*P(marital=M|Y)*P(50.7|Y)
    double probYTest1 = 0;
    probYTest1 = 0.3*probYOwnerYes*probMarYes*0.00000000000000306669;
    //NO classification probabilites P(N|test1)=P(N)*P(Homeowner=Y|N)*P(maritial=M|N)*P(50.7|N)
    double probNTest1 = 0;
    probNTest1 = 0.7*probYOwnerNo*probMarNo*.00405064;
    //compare the probabilities
    if (probNTest1 > probYTest1){
        cout << "\nTest1 is classified as NO. Test1 is NOT a Defaulted Borrower." << endl;
        cout << "Probability classification No is (" << probNTest1 <<"), and is greater than probability classification Yes (" << probYTest1 << ").\n";
    }
    else if (probYTest1 > probNTest1){
        cout << "\nTest1 is classified as YES. Test1 IS a Defualted Borrower.";
        cout << "Probability of classification Yes is (" << probYTest1 <<"), and is greater than probability classification No (" << probNTest1 << ").\n";
    }
    //The rest of the tests classify the data already in Table 5.9 in order. Train1 refers to TID1 and TrainingSet1.
    //Gaussian Distribution was used to calculate the continuous attribute Annual Income.
    //Classification of train1
    //YES classification probabilities P(Y|train1)=P(Y)*P(Homeowner=Y|Y)*P(Marital=S|Y)*P(125|Y)
    double probYTrain1 = 0;
    probYTrain1 = 0.3*probYOwnerYes*probSingYes*.0070432326;
    //NO classification probabilites P(N|test1)=P(N)*P(Homeowner=Y|N)*P(Maritial=S|N)*P(125|N)
    double probNTrain1 = 0;
    probNTrain1 = 0.7*probYOwnerNo*probSingNo*0.000000000001826944082;
    //compare the probabilities
    if (probNTrain1 > probYTrain1){
        cout << "\nTrain1 is classified as NO. Train1 is NOT a Defaulted Borrower." << endl;
        cout << "Probability classification No is (" << probNTrain1 <<"), and is greater than probability classification Yes (" << probYTrain1 << ").\n";
    }
    else if (probYTrain1 > probNTrain1){
        cout << "\nTrain1 is classified as YES. Train1 IS a Defualted Borrower.";
        cout << "Probability of classification Yes is (" << probYTrain1 <<"), and is greater than probability classification No (" << probNTrain1 << ").\n";
    }
    
    //Classification of train2
    //YES classification probabilities P(Y|train2)=P(Y)*P(Homeowner=N|Y)*P(Marital=M|Y)*P(100|Y)
    double probYTrain2 = 0;
    probYTrain2 = 0.3*probNOwnerYes*probMarYes*0.01079819330;
    //NO classification probabilites P(N|train2)=P(N)*P(Homeowner=Y|N)*P(Maritial=S|N)*P(100|N)
    double probNTrain2 = 0;
    probNTrain2 = 0.7*probNOwnerNo*probMarNo*0.00719276489;
    //compare the probabilities
    if (probNTrain2 > probYTrain2){
        cout << "\nTrain2 is classified as NO. Train2 is NOT a Defaulted Borrower." << endl;
        cout << "Probability classiication No is (" << probNTrain2 <<"), and is greater than probability classification Yes (" << probYTrain2 << ").\n";
    }
    else if (probYTrain2 > probNTrain2){
        cout << "\nTrain2 is classified as YES. Train2 IS a Defualted Borrower.";
        cout << "Probability of classification Yes is (" << probYTrain2 <<"), and is greater than probability classification No (" << probNTrain2 << ").\n";
    }
    
    //Classification of Train3
    //YES classification probabilities P(Y|Train3)=P(Y)*P(Homeowner=N|Y)*P(Marital=S|Y)*P(70|Y)
    double probYTrain3 = 0;
    probYTrain3 = 0.3*probNOwnerYes*probSingYes*0.00002676604515;
    //NO classification probabilites P(N|Train3)=P(N)*P(Homeowner=N|N)*P(Maritial=S|N)*P(70|N)
    double probNTrain3 = 0;
    probNTrain3 = 0.7*probNOwnerNo*probSingNo*0.00558997494;
    //compare the probabilities
    if (probNTrain3 > probYTrain3){
        cout << "\nTrain3 is classified as NO. Train3 is NOT a Defaulted Borrower." << endl;
        cout << "Probability classification No is (" << probNTrain3 <<"), and is greater than probability classification Yes (" << probYTrain3 << ").\n";
    }
    else if (probYTrain3 > probNTrain3){
        cout << "\nTrain3 is classified as YES. Train3 IS a Defualted Borrower.";
        cout << "Probability of classification Yes is (" << probYTrain3 <<"), and is greater than probability classification No (" << probNTrain3 << ").\n";
    }
    
    //Classification of Train4
    //YES classification probabilities P(Y|Train4)=P(Y)*P(Homeowner=Y|Y)*P(Marital=M|Y)*P(120|Y)
    double probYTrain4 = 0;
    probYTrain4 = 0.3*probYOwnerYes*probMarYes*0.000000001215176570;
    //NO classification probabilites P(N|Train4)=P(N)*P(Homeowner=Y|N)*P(Maritial=M|N)*P(120|N)
    double probNTrain4 = 0;
    probNTrain4 = 0.7*probYOwnerNo*probMarNo*0.00719276489;
    //compare the probabilities
    if (probNTrain4 > probYTrain4){
        cout << "\nTrain4 is classified as NO. Train4 is NOT a Defaulted Borrower." << endl;
        cout << "Probability classification No is (" << probNTrain4 <<"), and is greater than probability classification Yes (" << probYTrain4 << ").\n";
    }
    else if (probYTrain4 > probNTrain4){
        cout << "\nTrain4 is classified as YES. Train4 IS a Defualted Borrower.";
        cout << "Probability of classification Yes is (" << probYTrain4 <<"), and is greater than probability classification No (" << probNTrain4 << ").\n";
    }
    
    //Classification of Train5
    //YES classification probabilities P(Y|Train5)=P(Y)*P(Homeowner=N|Y)*P(Marital=D|Y)*P(95|Y)
    double probYTrain5 = 0;
    probYTrain5 = 0.3*probNOwnerYes*probDivYes*0.04839414490;
    //NO classification probabilites P(N|Train5)=P(N)*P(Homeowner=N|N)*P(Maritial=D|N)*P(95|N)
    double probNTrain5 = 0;
    probNTrain5 = 0.7*probNOwnerNo*probDivNo*0.00704323261;
    //compare the probabilities
    if (probNTrain5 > probYTrain5){
        cout << "\nTrain5 is classified as NO. Train5 is NOT a Defaulted Borrower." << endl;
        cout << "Probability classification No is (" << probNTrain5 <<"), and is greater than probability classification Yes (" << probYTrain5 << ").\n";
    }
    else if (probYTrain5 > probNTrain5){
        cout << "\nTrain5 is classified as YES. Train5 IS a Defualted Borrower.";
        cout << "Probability of classification Yes is (" << probYTrain5 <<"), and is greater than probability classification No (" << probNTrain5 << ").\n";
    }
    
    //Classification of Train6
    //YES classification probabilities P(Y|Train6)=P(Y)*P(Homeowner=N|Y)*P(Marital=M|Y)*P(60|Y)
    double probYTrain6 = 0;
    probYTrain6 = 0.3*probNOwnerYes*probMarYes*0.000000001215176570;
    //NO classification probabilites P(N|Train6)=P(N)*P(Homeowner=N|N)*P(Maritial=M|N)*P(60|N)
    double probNTrain6 = 0;
    probNTrain6 = 0.7*probNOwnerNo*probMarNo*0.00480527513;
    //compare the probabilities
    if (probNTrain6 > probYTrain6){
        cout << "\nTrain6 is classified as NO. Train6 is NOT a Defaulted Borrower." << endl;
        cout << "Probability classification No is (" << probNTrain6 <<"), and is greater than probability classification Yes (" << probYTrain6 << ").\n";
    }
    else if (probYTrain6 > probNTrain6){
        cout << "\nTrain6 is classified as YES. Train6 IS a Defualted Borrower.";
        cout << "Probability of classification Yes is (" << probYTrain6 <<"), and is greater than probability classification No (" << probNTrain6 << ").\n";
    }
    
    //Classification of Train7
    //YES classification probabilities P(Y|Train7)=P(Y)*P(Homeowner=Y|Y)*P(Marital=D|Y)*P(220|Y)
    double probYTrain7 = 0;
    probYTrain7 = 0.3*probYOwnerYes*probDivYes*0.00000000000000000000000000000000000000000000000000001289451994;//P(220|Y) is wrong value should be (.1289 e^-128). Smoothing it out to the number of decimal places it is at.
    //NO classification probabilites P(N|Train7)=P(N)*P(Homeowner=Y|N)*P(Maritial=D|N)*P(220|N)
    double probNTrain7 = 0;
    probNTrain7 = 0.7*probYOwnerNo*probDivNo*0.000957211338;
    //compare the probabilities
    if (probNTrain7 > probYTrain7){
        cout << "\nTrain7 is classified as NO. Train7 is NOT a Defaulted Borrower." << endl;
        cout << "Probability classification No is (" << probNTrain7 <<"), and is greater than probability classification Yes (" << probYTrain7 << ").\n";
    }
    else if (probYTrain7 > probNTrain7){
        cout << "\nTrain7 is classified as YES. Train7 IS a Defualted Borrower.";
        cout << "Probability of classification Yes is (" << probYTrain7 <<"), and is greater than probability classification No (" << probNTrain7 << ").\n";
    }
    
    //Classification of Train8
    //YES classification probabilities P(Y|Train8)=P(Y)*P(Homeowner=N|Y)*P(Marital=S|Y)*P(85|Y)
    double probYTrain8 = 0;
    probYTrain8 = 0.3*probNOwnerYes*probSingYes*0.04839414490;
    //NO classification probabilites P(N|Train8)=P(N)*P(Homeowner=N|N)*P(Maritial=S|N)*P(85|N)
    double probNTrain8 = 0;
    probNTrain8 = 0.7*probNOwnerNo*probSingNo*0.00658530302;
    //compare the probabilities
    if (probNTrain8 > probYTrain8){
        cout << "\nTrain8 is classified as NO. Train8 is NOT a Defaulted Borrower." << endl;
        cout << "Probability classification No is (" << probNTrain8 <<"), and is greater than probability classification Yes (" << probYTrain8 << ").\n";
    }
    else if (probYTrain8 > probNTrain8){
        cout << "\nTrain8 is classified as YES. Train8 IS a Defualted Borrower.";
        cout << "Probability of classification Yes is (" << probYTrain8 <<"), and is greater than probability classification No (" << probNTrain8 << ").\n";
    }
    
    //Classification of Train9
    //YES classification probabilities P(Y|Train9)=P(Y)*P(Homeowner=N|Y)*P(Marital=M|Y)*P(75|Y)
    double probYTrain9 = 0;
    probYTrain9 = 0.3*probNOwnerYes*probMarYes*0.0008863696824;
    //NO classification probabilites P(N|Train9)=P(N)*P(Homeowner=N|N)*P(Maritial=M|N)*P(75|N)
    double probNTrain9 = 0;
    probNTrain9 = 0.7*probNOwnerNo*probMarNo*0.00595362343;
    //compare the probabilities
    if (probNTrain9 > probYTrain9){
        cout << "\nTrain9 is classified as NO. Train9 is NOT a Defaulted Borrower." << endl;
        cout << "Probability classification No is (" << probNTrain9 <<"), and is greater than probability classification Yes (" << probYTrain9 << ").\n";
    }
    else if (probYTrain9 > probNTrain9){
        cout << "\nTrain9 is classified as YES. Train9 IS a Defualted Borrower.";
        cout << "Probability of classification Yes is (" << probYTrain9 <<"), and is greater than probability classification No (" << probNTrain9 << ").\n";
    }
    
    //Classification of Train10
    //YES classification probabilities P(Y|Train10)=P(Y)*P(Homeowner=N|Y)*P(Marital=S|Y)*P(90|Y)
    double probYTrain10 = 0;
    probYTrain10 = 0.3*probNOwnerYes*probSingYes*0.07978845608;
    //NO classification probabilites P(N|Train10)=P(N)*P(Homeowner=N|N)*P(Maritial=S|N)*P(90|N)
    double probNTrain10 = 0;
    probNTrain10 = 0.7*probNOwnerNo*probSingNo*0.00595362343;
    //compare the probabilities
    if (probNTrain10 > probYTrain10){
        cout << "\nTrain10 is classified as NO. Train10 is NOT a Defaulted Borrower." << endl;
        cout << "Probability classification No is (" << probNTrain10 <<"), and is greater than probability classification Yes (" << probYTrain10 << ").\n";
    }
    else if (probYTrain10 > probNTrain10){
        cout << "\nTrain10 is classified as YES. Train10 IS a Defualted Borrower.";
        cout << "Probability of classification Yes is (" << probYTrain10 <<"), and is greater than probability classification No (" << probNTrain10 << ").\n";
    }
    cout << "Edit the source code to add more people to test if they will become a defaulted borrower!\n";
    
    return 0;
}
