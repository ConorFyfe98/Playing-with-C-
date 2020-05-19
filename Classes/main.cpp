#include <iostream>

using namespace std;

class Book{
private:
    string reviewRating;
public:
    string title;
    string author;
    int pages;

    //Constructor
    Book(string aTitle, string aAuthor, int aPages, string aReviewRating){
    title = aTitle;
    author = aAuthor;
    pages = aPages;
    setReviewRating(aReviewRating);
    }

    //setter for rating - allows input validation
    void setReviewRating(string aReviewRating){

    if(aReviewRating == "Bad" || aReviewRating == "Average" || aReviewRating == "Good"){
     reviewRating = aReviewRating;
    }else{
        reviewRating = "Invalid Rating";
    }
    }

    //Getter - retrieves private rating
    string getReviewRating(){
        return reviewRating;
    }

    //Object function
    bool isLongRead(){
    if(pages>500){
        return true;
    }else{
    return false;
    }

    }
};
int main()
{
//Utilising object constructor
Book book1("Horrid Henry", "JK Rowling", 209, "Bad");
Book book2("Harry Potter", "Ron Weasly", 800, "Good");

//Utilising object function
cout << book1.title << " is a long read: " << boolalpha << book1.isLongRead() << endl;
cout << book2.title << " is a long read: " << boolalpha << book2.isLongRead() << endl;


//Utilising setters and getters
cout << endl << "Critic reviews:" << endl;
cout << book1.title << " is " << book1.getReviewRating() << endl;
cout << book2.title << " is " << book2.getReviewRating() << endl;

//User input utilising setters and getters
string book1Review, book2Review;

cout << "Please enter your opinion as : Bad, Average or Good" << endl;
cout << "What is your review rating of " << book1.title << "?" << endl;
getline(cin, book1Review);
book1.setReviewRating(book1Review);

cout << "What is your review rating of " << book2.title << "?" << endl;
getline(cin, book2Review);
book2.setReviewRating(book2Review);

cout << endl << "Your Opinion: " << endl;
cout << book1.title << " is " << book1.getReviewRating() << endl;
cout << book2.title << " is " << book2.getReviewRating() << endl;

return 0;
}
