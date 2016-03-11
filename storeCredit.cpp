#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {

    fstream credFile ("credit.txt");
    int entries, credit, items;
    int i=0;

    credFile >> entries;
    int casenum = 0;

    while (i < entries) {

        credFile >> credit;
        credFile >> items;

        vector<int> prices;
        int p;

        for (int j = 0; j < items; j++) {

            credFile >> p;
            prices.push_back(p);

        }

        for (int m = 0; m < items; m++) {
            for (int n = m+1; n < items; n++) {

                if (prices[m] + prices[n] == credit){
                    cout << "Case # " << casenum+1 << ": " << m+1 << " " << n+1 << endl;
                    casenum++;
                }

            }

        }


    }


}


