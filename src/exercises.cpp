
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
    if (s1<= s2 && s1 <= s3 ){
        cout<< s1;
    }
    else if (s2 <= s3 && s2<=s1){
        cout<< s2;
    }
    else if (s3<=s1 && s3<=s1){
        cout<<s3;
    }
    
}

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
  double p=0,x1,x2;
  p=(B*B)-4*A*C;
  x1=(-B+(sqrt((B*B)-4*A*C)))/(2*A);
  x2=(-B-(sqrt((B*B)-4*A*C)))/(2*A);
  if(A==0 && B != 0){
      cout<<(-C)/B<<endl;
    }  
    else if(A == 0 && B == 0 || B==0 && C==0) {
        cout<<"";
    }
  else if(p>=0)
  {
    if(x1==x2){
            cout<<x1<<endl;
    } 
        else{
        cout<<x1<<" ";
        cout<<x2<<endl;
    }
  } 
  else{
        cout<<"";
  }
}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
    long int hours=seconds/(60*60);
    long int minutes = (seconds-hours*(60*60))/60; 
    long int show_seconds = seconds-minutes*60-hours*(60*60);
    if (seconds <0){
        cout<<"Error: Input seconds cannot be negative."<<endl;
    }
    else if (hours <10 && minutes<10 && show_seconds<10)
    {
         cout<<0<<hours<<":"<<0<<minutes<<":"<<0<<show_seconds<<endl;
    }
    else if(hours <10 && minutes<10){
        cout<<0<<hours<<":"<<0<<minutes<<":"<<show_seconds<<endl;
    }
    else if (hours <10 && show_seconds<10){
         cout<<0<<hours<<":"<<minutes<<":"<<0<<show_seconds<<endl;
    }
    else if (minutes<10 && show_seconds<10){
        cout<<hours<<":"<<0<<minutes<<":"<<0<<show_seconds<<endl;
    }
    else if (hours <10){
        cout<<0<<hours<<":"<<minutes<<":"<<show_seconds<<endl;
    }
    else if (minutes<10){
        cout<<hours<<":"<<0<<minutes<<":"<<show_seconds<<endl;
    }
    else if (show_seconds<10){
        cout<<hours<<":"<<minutes<<":"<<0<<show_seconds<<endl;
    }
    else{
        cout<<hours<<":"<<minutes<<":"<<show_seconds<<endl;
        
    }
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
cout<<s1[0]<<s2[0]<<s3[0]<<s4[0]<<s5[0]<<endl;
string mala_suerte="Aun sin suerte";
string suerte="Hemos encontrado algo!";
if(s1[0]==s5[0]){
    return suerte;
}
else{
    return mala_suerte;
}
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
int S=a+b;
if (a<0 || b<0){
    cout<<0<<endl;
}
else {
    cout<<S*2<<endl;
}

}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}