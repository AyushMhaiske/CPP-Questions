// area of a square
// #include<iostream>
// using namespace std;

// int main(){
//     int side;
//     int area;
//     cout<<"enter the side of the square =";
//     cin>>side;
//     area = side * side;
//     cout<<"area of the square is "<<area<<endl;
// }

// to bill 3 items with gst
// #include<iostream>
// using namespace std;

// int main(){
//     int pencil,pen,eraser;
//     cout<<"enter the prizes of pencil,pen,eraser = ";
//     cin>>pencil;
//     cin>>pen;
//     cin>>eraser;
//     float total = pencil+pen+eraser;
//     total = total + total*0.18;
//     cout<<"the total bill of three items(including GST 18% is )"<<total;
// }

// simple intrest calculator
// #include<iostream>
// using namespace std;

// int main(){
//     int principle,rate,time;
//     cout<<"enter the values of principle ,rate,time "<<endl;
//     cin>>principle;
//     cin>>rate;
//     cin>>time;

//     int simple_intrest = (principle*rate*time)/100;
//     cout<<"the simple intrest of the values is "<<simple_intrest;
// }

// wap to write area of the circle
// #include<iostream>
// using namespace std;

// int main(){
//     int radius,area;
//     cout<<"enter the values of radius";
//     cin>>radius;

//     area = radius*radius*3.14;
//     cout<<"the area of the circe is "<<area;
//     return 0;
// }

// wap to find the if its positive , negative or zero
// #include <iostream>
// using namespace std;

// int main(){
//     int a;
//     cout<<"enter the number :";
//     cin>>a;
//     if(a>0){
//         cout<<"the entered number is positive";
//     }else if(a<0){
//         cout<<"the entered number is negative";
//     }else{
//         cout<<"the entered number is zero";
//     }
//     return 0;
// };

// wap to find the entered year is leap or not
// #include <iostream>
// using namespace std;

// int main(){
//     int year;
//     cout<<"enter the year ";
//     cin>> year;
//     if(year%4==0){
//         cout<<"the entered year is leap year";
//     }else{
//         cout<<"the entered year is not a leap year";
//     }return 0;
// }


// wap a program to find any 3 digit number is amastrong or not
// #include <iostream>
// using namespace std;
// int main(){
//     int number;
//     cout<<"pls enter the 3 digit number";
//     cin>>number;

//     int n = number;
//     int dig1 = number % 10;
//     number /= 10;
//     int dig2 = number % 10;
//     number /= 10;
//     int dig3 = number % 10;    

//     int add_of_cube_of_digits = (dig1*dig1*dig1)+(dig2*dig2*dig2)+(dig3*dig3*dig3);
//     if(add_of_cube_of_digits == n){
//         cout<<"the entered number is armstrong number";
//     }else{
//         cout<<"the given number is not armstrong number";
//     }
// }


// wap for prime number
// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
//    int prime_number;
//    bool isprime = true;
//    cout<<"enter the number :";
//    cin>>prime_number;
   
//    for(int i=2;i<=sqrt(prime_number);i++){
//     if(prime_number % i == 0){
//         isprime = false;
//         break;
//     }   
//    }
   
//    if(isprime){
//        cout<<"The entered number is a prime number";
//    }else{
//        cout<<"the entered number is not a prime number";
//    }
//    return 0;
// }

// wap a program for factorial
// #include<iostream>
// using namespace std;

// int main(){
//     int number;
//     int factorial = 1;
//     cout<<"enter the numberv :";
//     cin>>number;

//     for(int i=1;i<=number;i++){
//         factorial = factorial * i;
//     }
//     cout<<factorial;
// }


// wap to print multiplication tabel untill 10
// #include<iostream>
// using namespace std;

// int main(){
//     int number;
//     int multy;
//     cout<<"enter the number";
//     cin>>number;

//     for(int i=1;i<=10;i++){
//         multy = number * i;
//         cout<<number<<"*"<<i<<"="<<multy<<endl;
//     }
//     return 0;
// }

// wap a program to write al prime number from 2 to n
// #include <iostream>
// using namespace std;

// int main(){
//     int number;
//     cout<<"enter the number";
//     cin>>number;

//     for(int i=2;i<=number;i++){
//         int curr = i;
//         bool isprime = true;
//         for(int j=2;j*j<=i;j++){
//             if(curr % j== 0){
//                 isprime =false;
//             }   
//         }
//         if(isprime){
//             cout<<curr<<"  ";
//         }   
//     }
// }

// wap to first n number of fibonacci series
// #include<iostream>
// using namespace std;

// int main(){
//     int number; 
//     cout<<"enter the number";
//     cin>>number;
    
//     int first = 0, sec =1;
//     cout<<first <<" "<<sec<<" ";
//     for(int i=2;i<number;i++){
//         int third = first+ sec;
//         cout << third<<" ";
//         first = sec;
//         sec = third;
//     }
// }



// wap to write a program for printing the pattern
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4
// #include <iostream>
// using namespace std;

// int main(){
//     for(int i=1;i<=4;i++){
//         for (int j=1;j<=4; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

// WAP to draw the following pattern
// *
// * *
// * * *
// * * * *
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// wap to print the following pattern
// * * * * 
// * * *
// * *
// *
// #include <iostream>
// using namespace std;

// int main(){
//     for(int i=4;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// } 

// wap to draw the patern 
// 1
// 12
// 123
// 1234
// #include <iostream>
// using namespace std;

// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// wap to draw the hollow rectangle pattern 
// A 
// BC
// DEF 
// GHIJ
// #include <iostream>
// using namespace std;

// int main(){
//     char ch= 'A';
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=i;j++){
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// WAP to draw the pattern 
// *****
// *   *
// *   *
// *****
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=4;i++){
//         cout<<"*";
//         for(int j=1;j<=4-1;j++){
//             if(i==1||i==4){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<"*"<<endl;
//     }
//     return 0;
// }

// wap program to draw
//     *
//    **
//   ***
//  ****
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i=1;i<=n;i++){
//         // spaces
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         // stars
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// wap to draw the pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// #include <iostream>
// using namespace std;

// int main(){
//     int number=1;
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<number;
//             number++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// wap a program to draw 
//     * 
//    * * 
//   * * *
//  * * * * 
// * * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 
// #include <iostream>
// using namespace std;

// int main(){
//     for(int i=0;i<=4;i++){
//         // spaces
//         for(int j=1;j<=4-i;j++){
//             cout<<" ";
//         }
//         // star
//         for(int j=1;j<=(2*i+1);j++){
//             cout<<"*";
//         }
        

//         cout<<endl;
//     }
//     for(int i=4;i>=0;i--){
//         // spaces
//         for(int j=1;j<=4-i;j++){
//             cout<<" ";
//         }
//         // star
//         for(int j=1;j<=(2*i+1);j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// wap to draw the butterfly pattern
// *   *
// ** **
// *****
// ** **
// *   *
// #include <iostream>
// using namespace std;

// int main(){
//     for(int i=1;i<=4;i++){
//         // star 
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         // space
//         for(int j=1;j<=2*(4-i);j++){
//             cout<<" ";
//         }
//         // star
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=4;i>=1;i--){
//         // star 
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         // space
//         for(int j=1;j<=2*(4-i);j++){
//             cout<<" ";
//         }
//         // star
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


#include <iostream>
using namespace std;

int main(){

    cout<<"hello world";

    return 0;
}