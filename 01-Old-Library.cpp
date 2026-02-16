#include <iostream>
#include <string>
using namespace std;

int main()
{
    string favoriteBook;
    getline(cin, favoriteBook);

    string book;
    getline(cin, book);

    int counter = 0;
    
    while (book != "No More Books")
    {
        if (book == favoriteBook)
        {
            cout << "You checked " << counter << " books and found it." << endl;
            return 0;
        }
        counter ++;    
        
        getline(cin, book);
    }

    cout << "The book you search is not here!" << endl;
    cout << "You checked " << counter << " books." << endl;

    return 0;
}