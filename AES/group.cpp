#include<bits/stdc++.h>

using namespace std;

int main() {
    ifstream file("output_clean.txt");
    FILE *fo;
    ofstream file1("output1.txt");
    string word;
    for (int i=0;i<8;i++) {
        for(int j=0;j<128;j++) {
            file >> word;
            file1 << word;
            file1 << " ";
        }
        file1<<endl;

    }

}