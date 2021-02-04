# include <iostream>
using std::cout;

void merge(int process[], int left, int right, int middle) {
    // lns = left node size, rns = right node size
    int lns = middle - left + 1;
    int rns = right - middle;
    int l[lns];
    int r[rns];

    for (int i = 0 ; lns > i ; i++)
        l[i] = process[left + i];
    for (int i = 0 ; rns > i ; i++)
        r[i] = process[middle + 1 + i];

    int leftindex = 0;
    int rightindex = 0;
    int mergeindex = left;

    while (lns > leftindex && rns > rightindex) {
        if (r[rightindex] >= l[leftindex]) {
            process[mergeindex] = l[leftindex];
            leftindex++;
        } else {
            process[mergeindex] = r[rightindex];
            rightindex++;
        }
        mergeindex++;
    }

    while (lns > leftindex) {
        process[mergeindex] = l[leftindex];
        leftindex++;
        mergeindex++;
    }

    while (rns > rightindex) {
        process[mergeindex] = r[rightindex];
        rightindex++;
        mergeindex++;
    }
}

void mergesort(int process[], int left, int right) {
    if (right > left) {
        int middle = left + (right - left) / 2;
        mergesort(process, left, middle);
        mergesort(process, middle+1, right);
        merge(process, left, right, middle);
    }
}

int main() {
    int num[] = { 5, 3, 2, 4, 1 };
    int size = sizeof(num) / sizeof(num[0]);

    cout << "Original order" << "\n";
    for (int i = 0 ; 5 > i ; i++) {
        cout << num[i] << "\n";
    }

    mergesort(num, 0, size - 1);
    cout << "After Merge Sort" << "\n";
    for (int i = 0 ; 5 > i ; i++) {
        cout << num[i] << "\n";
    }
}
