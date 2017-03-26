#include <iostream>


using namespace std;

int n = 150;

int BruteForceMedian(int numbers[]) {

    int k = (n/2);


    for( int i = 0; i < (n-1); i++) {
        //cout << numbers[i] << endl;

        int numsSmaller = 0;
        int numsEqual = 0;

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

    // Generate data
    for (int i = 0; i < n; i = i + 1){
        nums[i] = i;
    }

    // Shuffle data
    for (int x = 0; x < (n-1); x++) {
            int randPos = rand() % (n-1);
            int tempPos = nums[x];
            nums[x] = nums[randPos];
            nums[randPos] = tempPos;
    }

    cout << "Median: " << BruteForceMedian(nums);

    return 0;
}
