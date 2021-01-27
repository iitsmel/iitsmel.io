# include <iostream>
using std::cout;

int main()
{
    int num[6] = { 5, 3, 2, 4, 1 };
    int temp = 0 ; // for tempery usage

    cout << "Original order" << "/n";
    for(int i = 0 ; 5 > i ; i++) {
        cout << num[i] << "\n";
    }

    for(int i = 0 ; 5 > i ; i++) {
        for(int j = i+1 ; 5 > j ; j++) {
            if( num[i] > num[j] ) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    cout << "After Bubble Sort" << "\n";
    for( int i = 0 ; 5 > i ; i++ ) {
        cout << num[i] << "\n";
    }

}
