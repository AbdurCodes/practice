#include <iostream>
using namespace std;

// Fibonacci Sequence: the sequence starts with 0 and 1, and then each subsequent number is the sum of the two preceding ones.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, ...


int nth_fibonachi_num (int n) {
    if (n==1) return 0;
    else if (n==2) return 1;
    else {
        n = nth_fibonachi_num(n-1) + nth_fibonachi_num(n-2);
        return n;
    }
}

main () {

    cout << nth_fibonachi_num(1) << "\n";
    cout << nth_fibonachi_num(2) << "\n";
    cout << nth_fibonachi_num(3) << "\n";
    cout << nth_fibonachi_num(4) << "\n";
    cout << nth_fibonachi_num(5) << "\n";
    cout << nth_fibonachi_num(6) << "\n";
    cout << nth_fibonachi_num(7) << "\n";
    cout << nth_fibonachi_num(8) << "\n";
    cout << nth_fibonachi_num(9) << "\n";
    cout << nth_fibonachi_num(10) << "\n";
    cout << nth_fibonachi_num(19) << "\n";

    
}