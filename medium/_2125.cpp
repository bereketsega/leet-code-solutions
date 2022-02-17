#include <iostream>
#include <vector>

using namespace std;

int numberOfBeams(vector<string>& bank) {
    // no beam target 
    if (bank.size() < 2){
        return 0;
    }

    int res = 0; // to count the total laser beams
    int firstOnes = count(bank[0].begin(), bank[0].end(), '1'); // first row
    int currOnes =  (firstOnes == 0) ? -1: firstOnes; // assign -1 if first row is zero
    int nextOnes; // to count laser beams in firstOnes +1 row

    // loop from second to second-to-last row
    for (int i = 1; i < bank.size()-1; i++) {
        // assign number of ones in the next row
        nextOnes = count(bank[i].begin(), bank[i].end(), '1');
        // check if ones exist in row i and i-1 
        if (nextOnes != 0 && currOnes != -1) {
            res +=(nextOnes*currOnes); 
        }
        // assign i-1 row to i row if it is not all zeros
        if(nextOnes!=0)
            currOnes = nextOnes;
        
    }

    // number of ones in the last row
    int lastOnes = count(bank[bank.size()-1].begin(), bank[bank.size()-1].end(), '1');
    int secondLastOnes;
    for (int i = bank.size()-2; i >=0 ; i--) {
        // number of ones in the second-to-last row
        int curr = count(bank[i].begin(), bank[i].end(), '1');
        // check if ones exist
        if (curr != 0) {
            // assign the number of ones to secondLasOnes   
            secondLastOnes = count(bank[i].begin(), bank[i].end(), '1');
            break;
        }
    }

    // multiply last row ones and secondLastOnes if last row is not all zeros
    if (lastOnes != 0 ){
        res+=(lastOnes*secondLastOnes);
    }

    return res;
}

int main() {
    
    vector<string> nums = {"011001","000000","010100","001000"};

    cout << numberOfBeams(nums)<<endl;

    return 0;
}

/*
Anti-theft security devices are activated inside a bank. 
You are given a 0-indexed binary string array bank representing the floor plan of the bank, which is an m x n 2D matrix. 
bank[i] represents the ith row, consisting of '0's and '1's. '0' means the cell is empty, while'1' means the cell has a security device.

There is one laser beam between any two security devices if both conditions are met:

    The two devices are located on two different rows: r1 and r2, where r1 < r2.
    For each row i where r1 < i < r2, there are no security devices in the ith row.

Laser beams are independent, i.e., one beam does not interfere nor join with another.

Return the total number of laser beams in the bank.
*/
