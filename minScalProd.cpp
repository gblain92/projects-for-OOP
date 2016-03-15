#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void minimumScalar (vector<int>, vector<int>);

int main(){


vector<int> x, y;

minimumScalar(x, y);


return 0;

}


void minimumScalar (vector<int> x, vector<int> y) {

    if(x.size() != y.size())
        return;


    sort(x.begin(), x.end());           //sort from smallest to largest
    sort(y.begin(), y.end());           //sort from smallest to largest
    reverse (y.begin(), y.end());       //reverse so it now largest to smallest

    int scalProd = 0;

    for (int i = 0; i < x.size(); i++) {


        scalProd = scalProd + (x[i]*y[i]);  //multiply smallest x to largest y for minimum scalar
    }


    cout << "The minimum scalar product of these two vectors is: " << scalProd<< endl;
    return;
}

