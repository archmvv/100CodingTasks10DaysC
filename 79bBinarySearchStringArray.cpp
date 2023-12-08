#include <iostream>
#include <vector>
#include <string>
using namespace std;

static int binsearch(const vector<string>& str, const string& value);

int main() {
    vector<string> strings = {"bmw", "ford", "mercedes", "toyota"};
    const int asize = strings.size();

    cout << "Array elements:" << endl;
    for (int i = 0; i < asize; ++i) {
        cout << i + 1 << " " << strings[i] << endl;
    }
    cout << endl;

    const string search1 = "bmw";
    int result1 = binsearch(strings, search1);
    if (result1 != -1) {
        cout << "'" << search1 << "' was found at position: " << result1 + 1 << endl;
    } else {
        cout << "'" << search1 << "' was not found..." << endl;
    }

    const string search2 = "bentley";
    int result2 = binsearch(strings, search2);
    if (result2 != -1) {
        cout << "'" << search2 << "' was found at position: " << result2 << endl;
    } else {
        cout << "'" << search2 << "' was not found..." << endl;
    }

    return 0;
}

static int binsearch(const vector<string>& str, const string& value) {
    int position;
    int begin = 0;
    int end = str.size() - 1;
    int cond = 0;

    while (begin <= end) {
        position = (begin + end) / 2;

        if ((cond = str[position].compare(value)) == 0) {
            return position;
        } else if (cond < 0) {
            begin = position + 1;
        } else {
            end = position - 1;
        }
    }
    return -1;
}