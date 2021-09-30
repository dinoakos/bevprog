#include "std_lib_facilities.h"
int main(){
cout << "Who do you want to write to? \n" ;
string first_name;
cin >> first_name;
cout << "Give me a name of a friend! \n";
string friend_name;
cin >> friend_name;
cout << "what is the gender of your friend?(m for male, f for female) \n";
char sex = '0';
cin >> sex;
cout << "please tell me the age of the recipiant! \n";
int age;

cin >> age;

if(age <= 0 || age >= 110){
simple_error("you are kidding! \n");
}

cout << "Dear, " << first_name << endl;
cout << "\t How are you feeling? I'm really angry, someone broke the left mirror off of the suzuki.\n";
cout << "Have you seen " << friend_name << " lately? \n";
if(sex == 'f'){
cout << "If you see " << friend_name << " please ask her to call me. \n";
}
if(sex == 'm'){
cout << "If you see " << friend_name << " please ask him to call me. \n";
}
if(age>70){
cout << "Hope you are enjoying retirement. \n";
}else{
if(age==17){
cout << "You will be able to vote next year. \n";
}else{
if(age < 12){
cout << "Next year you will be " << age+1 << " . " << endl;
}
}
}  
cout << "Yours sincerly ________ Dino Akos";
return 0;
}
