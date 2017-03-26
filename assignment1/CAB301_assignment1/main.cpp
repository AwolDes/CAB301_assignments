#include <iostream>


using namespace std;

int n = 150;

int BruteForceMedian(int numbers[]) {

    int k = (n/2);


    for( int i = 0; i < (n-1); i++) {

        int numsSmaller = 0;
        int numsEqual = 0;
        // basic operations - called n-1^2 times
        for (int j = 0; j < (n-1); j++) {

            if (numbers[j] < numbers[i]) {
                numsSmaller += 1;
            } else if (numbers[j] == numbers[i]){
                numsEqual += 1;
            }
        }

        if ((numsSmaller < k) && (k <= (numsSmaller + numsEqual))){
            return numbers[i];
        }
    }

}


int main()
{


    int nums[n];

    // Generate data with the possibility of duplicates
    // Also randomizes the order
    for (int i = 0; i < n; i = i + 1){
        nums[i] = rand() % (n-1);
    }


    cout << "Median: " << BruteForceMedian(nums);

    return 0;
}
