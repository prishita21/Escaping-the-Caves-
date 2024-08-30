#include <iostream>
#include <fstream>
#include <unordered_map>
#include <bitset>
#include<iostream>
#include<string>
using namespace std;

int main() {
    // Initialize the mapping using an unordered map
    unordered_map<string, char> mapping;
    for (int i = 0; i < 16; i++) {
        bitset<4> bits(i); // Convert the integer i to a binary string
        int numi = bits[0]  + bits[1] * 2 + bits[2] * 4 + bits[3]*8; // Convert the binary string to an integer
        mapping[bits.to_string()] = 'f' + numi; // Add the mapping to the dictionary
    }
    // for (auto map : mapping) {
    //     cout<<map.first<<" "<<map.second<<endl;
    // }

    //Open the output file
    ofstream outfile("inputs.txt");

    // Generate the inputs and write them to the file
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 128; j++) {
            string curr_ip_j = bitset<8>(j).to_string(); // Convert the integer j to an 8-bit binary string
            char str1 = mapping[curr_ip_j.substr(0,4)];
            char str2 = mapping[curr_ip_j.substr(4,8)];
            string str3 = string(2*i,'f');
            string str4 = string(2*(8-i-1),'f');
            string str = str3 + str1 + str2 + str4;
            outfile << str << " ";
        }
        outfile <<endl;
    }

    // Close the output file
    outfile.close();

    return 0;
}

