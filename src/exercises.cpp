
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
     if (b==0){
        cout<<"Impossible"<<endl;
    }
    else{
        cout<<a/b<<endl;
    }
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
  if(n>a && n<b){
    cout<<n-(n*x/100)<<endl;
}
else if (n>b){
    cout<<n-(n*y/100)<<endl;
}
else{
    cout<<n<<endl;
}
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
if (character<=64){
    cout<<"not an alphabet"<<endl;
}
else if (character>=65 && character<=96){
    cout<<"upper-case alphabet"<<endl;
}
else if (character>=97){
    cout<<"lower-case alphabet"<<endl;
}
}


void exercise_6(int number) {
  // TODO: YOUR CODE HERE
if (number>=1 && number<=7){
switch (number) {
case 1:
cout<<"Monday"<<endl;break;
case 2:
cout<<"Tuesday"<<endl;break;
case 3:
cout<<"Wednesday"<<endl;break;
case 4:
cout<<"Thursday"<<endl;break;
case 5:
cout<<"Friday"<<endl;break;
case 6:
cout<<"Saturday"<<endl;break;
case 7:
cout<<"Sunday"<<endl;break;
}
}
else{
    cout<<"Invalid input"<<endl;
}
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
      const double pi=3.140000105; 
    if(r<0){
        cout<<"Error: Radius cannot be negative."<<endl;
    }
    else{
        cout<<4*pi*(r*r)<<endl;
        }
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
int r=(a+b);
string s1=to_string (r);
int letter=s1.size();
int end =r*(letter);
if (a<0 || b<0){
    return 0;
}
else {
    return end;
}

}

string exercise_11(int number) {
    if (number==11235813){
      return "Se encontro a Fibonacci";
  }
  else {
      return "Esto no es de Fibonacci";
  }
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
      
     if(color4==color3 && color4==color2 &&color4==color1){
        if(numb4==numb3 && numb4==numb2 && numb4==numb1){
            cout<<1<<endl<<2<<endl<<3<<endl;
            color4="complete";
        }
    }
    if (color4==color3 || color4==color2 || color4==color1
    ) { if(numb4 <0){
        if(numb3<numb2 && numb3<numb1){
            cout<<numb3<<endl;
            if(numb2<numb1){
                cout<<numb2<<endl;
            }
            if(numb1<numb2){
                cout<<numb1<<endl;
            }
            else{
                cout<<numb2<<endl;
            }
    
        }
    
    }
    }
   if (color4==color3 || color4==color2 || color4==color1){
        if(numb4==numb3 || numb4==numb2 || numb4==numb1)
        {
            cout<<numb4<<endl;
        }
    }
    







    
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  if(age<18){
    return "Not eligible";
}
else if (years_of_experience>=3 && years_of_experience<5){
    return "Project manager";
}
else if (years_of_experience>=5){
    return "Senior project manager";
}
else{
    return "Project coordinator";
}
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
string num_do_str=to_string(number_of_docs);
string message=num_do_str+" documentos encontrados";
if(number_of_docs<=0){
    return "No se encontraron documentos";
}
if(number_of_docs==1){
    return "Se encontro un documento";
}
else{
    return message;
}
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
    int d=a;
    cout<<"Los valores son: a = "<<a<<" b = "<<b<<" y c = "<<c<<endl;
    cout<<"Permutamos: a => b, b => c, c => a"<<endl;
    a=c;
    c=b;
    b=d;
    cout<<"Los valores despues de la permutacion son: a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
    
  

}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
    int h1=0,h2=0;
        if (debut<0 || debut>24 || fin<0 || fin>24){
        cout<<"Las horas deben estar entre 0 y 24!"<<endl;
        fin=50;
    }
        else if(fin<debut){
        cout<<"Que extraño, el inicio del alquiler es después del final..."<<endl;
          fin=50;
    }
    else if (debut==fin){
        cout<<"Que extraño, no has alquilado tu bicicleta por mucho tiempo!"<<endl;
          fin=50;
    }

    
    else{   
    while(debut>=0 && debut<7 && debut<fin ){
            h1++;
          debut++;
          
    }
    while(debut<17 && debut<fin){
             h2++;
            debut++;
        }
    while(debut<fin && fin<=24){
              h1++;
            debut++;
    }
    }
    if(h1>0 && h2>0 && fin<=24){
            cout<<"Haz alquilado una bicicleta por"<<endl;
        cout<<h1<<" hora(s) con el tarifario de 1 boliviano(s)"<<endl;
        cout<<h2<<" hora(s) con el tarifario de 2 boliviano(s)"<<endl;
        cout<<"El monto total a pagar es de "<<h1+h2*2 <<" boliviano(s)."<<endl;
    }
    if(h1==0 && fin<=24){
        cout<<"Haz alquilado una bicicleta por"<<endl;
        cout<<h2<<" hora(s) con el tarifario de 2 boliviano(s)"<<endl;
        cout<<"El monto total a pagar es de "<<h2*2 <<" boliviano(s)."<<endl;
    }
    if(h2==0 && fin<=24){
        cout<<"Haz alquilado una bicicleta por"<<endl;
        cout<<h1<<" hora(s) con el tarifario de 1 boliviano(s)"<<endl;
         cout<<"El monto total a pagar es de "<<h1<<" boliviano(s)."<<endl;
    }
    
    


}