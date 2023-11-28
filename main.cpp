#include <iostream>
using namespace  std;
//new thing template
//int main() {
//
//    return 0;
//}

//int main() {
//
//    cout << "Hello, World!" << endl;
//
//    return 0;
//}

// how to draw a shape
//int main() {
//    cout << "   /|" << endl;
//    cout << "  / |" << endl;
//    cout << " /  |" << endl;
//    cout << "/___|" << endl;
//
//    return 0;
//}
//--------------------------------------------------------------------------------------
//Variables
//int main() {
//    string name = "John";
//    int age = 20;
//    cout <<"There was a man named " << name << endl;
//    cout <<"he was " << age<<" years old " << endl;
//    cout <<"he liked the name " << name << endl;
//
//    return 0;
//}
//--------------------------------------------------------------------------------------
//data types
//int main() {
//    char A = 'A';
//    string phrase = "random noises";
//    int age = 50;
//    float thing = 50.3;
//    double that_thing = 100.6;
//    bool isathing = true;
//
//    return 0;
//}
//-------------------------------------------------------------------------------------
// Working with strings
//int main() {
//    string phrase = "String";
//    cout << "This is a "<<phrase <<endl;
//    cout << "This is a "<<phrase[0] <<endl;
//    cout << "This is a "<<phrase.length() <<endl;
//    phrase[0] = 'L';
//    cout << "This is a "<<phrase <<endl;
//    phrase[0] = 'S';
//    cout<< phrase.find("ing", 0) << endl;
//    cout << "This is a "<<phrase.substr(0,3) <<endl;
//
//    return 0;
//}

//class practice
//class Mammal {
//public:
//    void speak(){
//        cout<<"Speak like a mammal"<<"\n";
//    }
//    virtual void shout(){
//        cout<<"SHOUT like a mammal"<<"\n";
//    }
//};
//
//class Dog: public Mammal {
//public:
//    virtual void speak(){
//        cout<<"Speak like a Dog"<<"\n";
//    }
//    virtual void shout(){
//        cout<<"SHOUT like a Dog"<<"\n";
//    }
//};
//
//class Labrador: public Dog {
//public:
//    void speak(){
//        cout<<"Speak like a Lab"<<"\n";
//    }
//    void shout(){
//        cout<<"SHOUT like a Lab"<<"\n";
//    }
//};

//int main()
//{
//    Mammal m;
//    Dog d;
//    Labrador l;
//
//    Mammal* ref=&l;
//    ref->speak();
//
//    return 0;
//}
//---------------------------------------------------------------------------------
//working with numbers
//# include <cmath>
//int main() {
//
//    int number = 5;
//    number++;
//    cout <<   number<< endl ;
//
//    cout << pow(2,5) <<endl;
//    cout << round(4.5)<< endl;
//    cout << fmax(2,4)<< endl;
//    return 0;
//}
//------------------------------------------------------------------------------
//getting user input
//int main() {
//    int age;
//
//    cout << "Enter your Age: ";
//    cin >> age;
//    cout << "You are " <<age<< " years old"<< endl ;
//
//    string name;
//    cout << "Enter your name: ";
//    getline(cin, name);
//    cout << "Hello " <<name<< endl ;
//
//    return 0;
//}
//-------------------------------------------------------------------------
//Building a calculator

//int main()
//{
//    int num1;
//    int num2;
//    cout << "enter first number";
//    cin >> num1;
//    cout << "enter Second number";
//    cin >> num2;
//    cout << num1 + num2;
//    return 0;
//}
//--------------------------------------------------------------------------
//building mad libs game

//int main(){
//
//    string colour, pluralNoun, Celebrity;
//    cout << "enter a colour: ";
//    getline(cin, colour);
//    cout << "enter a plural noun: ";
//    getline(cin, pluralNoun);
//    cout << "enter a celebrity: ";
//    getline(cin, Celebrity);
//
//    cout<<"Roses are "<<colour << endl;
//    cout<< pluralNoun<<" are blue" << endl;
//    cout<<"I love "<< Celebrity << endl;
//   return 0;
//}
//--------------------------------------------------------------------------
//arrays
//int main(){
//
//    int luckyNums[5] = {3,7,13,21,25};
//
//    cout << luckyNums[0] << luckyNums[1];
//    return 0;
//}
//---------------------------------------------------------------------------
//functions
//void sayHi(string name, int age){
//
//    cout << "hello " <<name<< " you are "<< age<< endl;
//}
//
//int main()
//{
//    sayHi("John", 34);
//
//    return 0;
//}
//------------------------------------------------------------------------
//return statement
//double cube(double num){
//    double result = num * num * num;
//    return result;
//}
//
//int main()
//{
//    double answer = cube(3.5);
//    cout<< answer<< endl;
//    return 0;
//
//}
//--------------------------------------------------------------------------
//if statements
//
//int main()
//{
//    bool isMale = false;
//    bool isTall = false;
//    if (isMale && isTall){
//        cout << "you are a tall male";
//            }
//    else if (isMale && !isTall){
//        cout << "you are a short male";
//    }
//    else if (!isMale && isTall)
//        cout << "you are tall but not male";
//    else {
//        cout << "You are not a tall or a male";
//    }
//
//    return 0;
//}
//----------------------------------------------------------------------------
//if statements part 2
//int getMax(int num1, int num2, int num3){
//    int result;
//    if (num1 >= num2 && num1 >= num3){
//        result = num1;
//    }
//    else if (num2 >= num1 && num2 >=num3){
//        result = num2;
//    }
//    else{
//        result = num3;
//    }
//
//
//    return result;
//}
//int main()
//{
//    cout<< getMax(20,25, 6);
//    return 0;
//}
//--------------------------------------------------------------------------
// budiling a better calculator
//
//int main()
//{
//    int num1,num2;
//    char op;
//
//    cout<< "Enter first number: ";
//    cin >> num1;
//    cout<< "Enter operator: ";
//    cin >> op;
//    cout<< "Enter second number: ";
//    cin >> num2;
//    int result;
//    if (op == '+'){
//        result = num1 + num2;
//    }
//    else if (op =='-'){
//        result = num1 - num2;
//    }
//    else if (op == '*'){
//        result = num1 * num2;
//    }
//    else if (op == '/'){
//        result = num1 / num2;
//    }
//    else{
//        cout << "Invalid Operator";
//    }
//    cout << result;
//    return 0;
//}
//-------------------------------------------------------------------------
//switch statements

//    string getDayOfWeek(int dayNum){
//        string dayName;
//
//        switch (dayNum) {
//            case 0:
//                dayName = "Sunday";
//                break;
//            case 1:
//                dayName = "Monday";
//                break;
//            case 2:
//                dayName = "Tuesday";
//                break;
//            case 3:
//                dayName = "Wednesday";
//                break;
//            case 4:
//                dayName = "Thursday";
//                break;
//            case 5:
//                dayName = "Friday";
//                break;
//            case 6:
//                dayName = "Saturday";
//                break;
//            default:
//                dayName = "Invalid day number";
//        }
//
//        return dayName;
//    }
//
//int main()
//{
//
//        cout << getDayOfWeek(9);
//    return 0;
//}
//--------------------------------------------------------------------------
//While loops

//int main()
//{
//    int index = 1;
//    while(index <= 5){
//        cout << index<< endl;
//        index++;
//    }
//    return 0;
//}
//------------------------------------------------------------------------
//building a guessing game

//
//int main()
//{
//    int secretNum = 7;
//    int guess;
//    int guessCount = 0;
//    int guessLimit = 3;
//    bool outOfGuesses = false;
//
//    while (secretNum != guess && !outOfGuesses){
//        if(guessCount < guessLimit){
//        cout << "enter guess: ";
//        cin >> guess;
//        guessCount++;
//    }
//        else{
//            outOfGuesses = true;
//        }
//    }
//    if (outOfGuesses){
//        cout << "You lose";
//    } else {
//        cout << "You win" << endl;
//    }
//    return 0;
//}
//---------------------------------------------------------------------
//for loops

//int main()
//{
//    int nums[] = {1,2,3,4,5};
//
//    for (int i = 0; i <= 4; ++i) {
//         cout << nums[i] << endl;
//
//    }
//    return 0;
//}
//--------------------------------------------------------------------------
//exponent functions

//int power(int baseNum, int powNum) {
//    int result = 1;
//    for (int i = 0; i < powNum; i++) {
//        result = result * baseNum;
//    }
//
//    return result;
//}
//
//
//int main()
//{
//    cout << power(2,5);
//
//    return 0;
//    }
//-----------------------------------------------------------------------
// 2d arrays and nested loops

//int main()
//{
//    int numberGrid [3][2]= {
//                            {1, 2},
//                            {3, 4},
//                            {5, 6}
//                            };
//    for( int i = 0;i < 3;i++){
//        for( int j = 0; j < 2; j++){
//            cout << numberGrid[i][j];
//        }
//        cout << endl;
//    }
//    return 0;
//}
//--------------------------------------------------------------------------
//pointers
//
//int main()
//{
//
//    int age = 19;
//    int *pAge = &age;
//    double gpa = 2.7;
//    double *pgpa = &gpa;
//    string name = "Mike";
//    string *pname = &name;
//
//    cout << "age "<< &age<< endl;
//    cout << "gpa " << &gpa << endl ;
//    cout << "name " << &name << endl;
//
//    cout << pAge<< endl;
//    cout << pgpa << endl ;
//    cout << pname << endl;
//
//    cout << *pAge<< endl;
//    cout << *pgpa << endl ;
//    cout << *pname << endl;
//    return 0 ;
//}
//-------------------------------------------------------------------------
//classes and objects and constructors

//class Book {
//    public:
//        string title;
//        string author;
//        int pages;
//        Book(string aTitle, string aAuthor, int aPages){
//            title = aTitle;
//            author = aAuthor;
//            pages = aPages;
//        }
//};
//int main()
//{
//    Book book1("Bames Jond", "James Bond",16);
//    cout << book1.title;
//
//    return 0;
//}
//-----------------------------------------------------------------------
//object functions
//class Student{
//    public:
//        string name;
//        string major;
//        double gpa;
//        Student(string aName, string aMajor, double aGpa){
//            name = aName;
//            major = aMajor;
//            gpa = aGpa;
//        }
//        bool hasHonors(){
//            if(gpa >= 3.5){
//                return true;
//            }
//            return false;
//        }
//};
//
//int main ()
//{
//    Student student1("Jim", "Business", 2.4);
//    Student student2("Pam", "Art", 3.6);
//    cout << student2.hasHonors();
//    return 0;
//}
//-------------------------------------------------------------------------
//getters and setters

//class Movie{
//    private:
//    string rating;
//    public:
//        string title;
//        string director;
//
//        Movie(string aTitle, string aDirector, string aRating){
//            title = aTitle;
//            director = aDirector;
//            setRating(aRating);
//        }
//
//        void setRating(string aRating){
//            if (aRating == "G" || aRating == "PG"|| aRating == "PG-13"|| aRating == "R" || aRating == "NR" ){
//                rating = aRating;
//            }
//                else{
//                rating = "NR";
//            }
//        }
//        string getRating(){
//            return rating;
//        }
//};
//
//int main()
//{
//    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
//    //avengers.setRating("Dog");
//
//    cout << avengers.getRating();
//
//    return 0;
//}
//---------------------------------------------------------------------------
//inheritance

//class Chef {
//    public:
//        void makeChicken(){
//            cout << "the chef makes chicken" << endl;
//        }
//        void makeSalad(){
//            cout << "The chef makes salad" << endl;
//        }
//        void makeSpecialDish(){
//            cout << "The chef makes bbq ribs" << endl;
//        }
//};
//
//class ItalianChef : public Chef{
//    public:
//        void makePasta(){
//            cout << "The chef makes pasta "<< endl;
//        }
//        void makeChickenParm(){
//            cout << "The chef makes chicken parm" << endl;
//        }
//
//};
//
//int main(){
//
//    Chef chef;
//    chef.makeChicken();
//
//    ItalianChef italianChef;
//    italianChef.makeChickenParm();
//
//    return 0;
//}
//----------------------------------------------------------------------------
//#include <vector>
//
//int main(){
//    vector<int> v1 = {1,2,3,4};
//
//    for (int i = 0; i < v1.size(); ++i){
//        cout << v1[i] << endl;
//    }
//
//    for( auto itr = v1.begin(); itr != v1.end(); ++itr){
//        cout << *itr <<endl;
//    }
//   }
//------------------------------------------------------------------------
//operator overloading
//class Position
//{
//    public:
//        int x = 10;
//        int y = 20;
// //here we are overloading the  + operator
//        Position operator + (Position pos){
//            Position new_pos;
//            new_pos.x = x + pos.x;
//            new_pos.y = y + pos.y;
//            return new_pos;
//        }
// // here we are overloading the == operator
//        bool operator == (Position pos){
//            if (x== pos.x && y== pos.y){
//                return true;
//            }
//            return false;
//        }
//
//};
//
//int main(){
//     Position pos1, pos2;
//     Position pos3 = pos1 + pos2;
//
//     cout << pos3.x << " " << pos3.y ;
//
//    if (pos1 == pos2){
//        cout << " they are the same";
//
//    }
//
//    return 0;
//}
//--------------------------------------------------------------
// making a structure to overload operators and stuff

//struct YoutubeChannel{
//    string Name;
//    int SubscriberCount;
//    YoutubeChannel( string name, int subsribercount){
//        Name = name;
//        SubscriberCount = subsribercount;
//    }
//};
//ostream & operator<<(ostream& COUT, YoutubeChannel& ytChannel){
//    COUT<<"Name: "<<ytChannel.Name << endl;
//    COUT<< "Subsribers: " <<ytChannel.SubscriberCount<< endl;
//    return  COUT;
//}
//
//int main ()
//{
//    YoutubeChannel yt1 = YoutubeChannel("John", 4);
//    YoutubeChannel yt2 = YoutubeChannel("John 704", 44);
//
//    cout << yt1 ;
//
//    cin.get();
//
//    return 0;
//
//}
















