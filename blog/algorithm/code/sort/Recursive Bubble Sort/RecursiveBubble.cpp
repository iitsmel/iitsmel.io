# include <iostream>
# include <algorithm>
using std::cout;
using std::swap;

void bubbleSort(int after[], int number) {
    int temp = number - 1;
    for ( int i = 0 ; temp > i ; i++ ) {
        if (after[i] > after[i+1])
            swap(after[i], after[i+1]);
    }

    if (temp != 1 )
        bubbleSort(after, number-1);
}

void printout(int original[], int after[], int number) {
    cout << "Before Recursive Bubble Sort" << "\n";
    for (int i = 0 ; number > i ; i++ )
        cout << original[i] << "\n";
    cout << "After Recursive Bubble Sort" << "\n";
    for (int i = 0 ; number > i ; i++ )
        cout << after[i] << "\n";
}

int main() {
    int original[6] = { 5, 3, 2, 4, 1 };
    int after[6] = { 5, 3, 2, 4, 1 };
    int number = sizeof(original)/sizeof(original[0]);
    bubbleSort(after, number);
    printout(original, after, number);
}
