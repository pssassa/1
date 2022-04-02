#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void prog(istream& in) {

    int count = 0;
    string line;
    while (getline(in, line))
    {
        int countA = 0;
        int countE = 0;
        int i = 0;
        while (line[i]) {
            if (line[i] == 'A')
                countA++;
            if (line[i] == 'E')
                countE++;
            i++;
        }
        if (countE > countA)
            count++;
    }
    cout << "Result: " << count << endl;
}
  



int main()
{
    ifstream in("text.txt");
    if (!eof("text.txt") {
        cout<<" file dont opened"
    }
    else {
        prog(in);
    }
}

        