#include <vector>
#include <iostream>

using namespace std;


/*
Input Format

The first line of the input contains N,where N is the number of integers.The next line contains  space-separated integ

Output Format
Print the N integers of the array in the reverse order, space-separated on a single line.
*/


int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    // INPUT TIME
    vector<vector<int>> v1;
    for(int l=0; l < n; l++){
        // get the arrays of k values each
        int k;
        cin >> k;
        vector<int> v2;
        for(int h=0; h < k; ++h){
            // Get the values of the array
            int tmp;
            cin >> tmp;
            v2.push_back(tmp);    
        }
        v1.push_back(v2); // Add the array to the dynamic matrix
    }

    // QUERY TIME
    while(q != 0){
        int i, j;
        scanf("%d %d", &i, &j);
        cout << v1[i][j] << endl;
        --q;
    }

    return 0;
}