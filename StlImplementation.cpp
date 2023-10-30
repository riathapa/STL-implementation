#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;

char toLower(char ch){
    return tolower(ch);
}
void displayElements(string s);
string toLowerCase(string s);

int main(){

    vector<string> words;
    cout << "Enter the words and write quit if you want to stop! : : " << endl;
    
    string input;

    while(cin >> input && input != "quit"){
        words.push_back(input);
    }

    cout << endl;
    cout << "Words you have used :: " << endl;

    //use of algortihm with the vector container and non member function called displayElements
    for_each(words.begin(), words.end(), displayElements);
    cout << endl;

    set<string> wordSet;
    transform(words.begin(), words.end(), insert_iterator<set<string> > (wordSet, wordSet.begin()), toLowerCase);
    cout << "Alphabetical Order of Set! :: " << endl;
    for_each(wordSet.begin(), wordSet.end(), displayElements);
    cout << endl;



    return 0;
}

void displayElements(string s){
    cout << " " << s;
}

string toLowerCase(string s){
    transform(s.begin(), s.end(), s.begin(), toLower);
    return s;
}