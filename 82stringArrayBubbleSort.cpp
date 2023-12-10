#include <iostream>
#include <cstring> 
#include <cstdlib>
using namespace std;

void sortWords(char *x[], int y);
void swap(char **, char **);

int main(){
    const int MAX = 50;
    const int N = 2000;

    char word[MAX];
    char *x[N];

    int i{};
    int n{};

    cout << "Enter the words you would like to sort. Press Ctrl + D to stop: \n";

    for (i = 0; cin >> word && i < N; i++){
        if(i >= N){
            cout << "The limit is reached: \n" << N << endl;
            exit(1);
        }

        x[i] = new char[strlen(word) + 1];
        strcpy(x[i], word);
    }

    n = i;
    cout << "Result: \n";
    sortWords(x, n);
    for (i = 0; i < n; i++){
        cout << x[i] << " ";
    }

    for (i = 0; i < n; i++) {
        delete[] x[i];
    }
    
    return 0;
}

void sortWords(char *x[], int y){
    for (int i = 0; i < y; i++){
        for (int j = i + 1; j < y; j++){
            if(strcmp(x[i], x[j]) > 0){
                swap(&x[i], &x[j]);
            }
        }
    }
}

void swap(char **p, char **q){
    char *tmp;

    tmp = *p;
    *p = *q;
    *q = tmp;
}