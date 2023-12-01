#include <iostream>
using namespace std;

struct course {
    int mark;
    char subject[30];
};

int main(){

    struct course *ptr;
    int noOfRecords{};
    cout << "Number of records: ";
    cin >> noOfRecords;

    ptr = (struct course*) malloc (noOfRecords * sizeof(struct course));

    for (int i = 0; i < noOfRecords; i++)
    {
        cout << "Enter the subject name and mark: ";
        cin >> (ptr + i) -> subject >> (ptr + i) -> mark;
    }

    cout << "Result: \n";

    for (int i = 0; i < noOfRecords; i++)
    {
        cout << (ptr + i) -> subject << "\t" << (ptr + i) -> mark << "\n";
    }
    
    return 0;
}