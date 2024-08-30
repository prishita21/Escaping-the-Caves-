#include<bits/stdc++.h>
using namespace std;

int main() {
    string cs = "qmnjvsanvwewcflctvprjtjtvvplvlfvxjavqildhcxmlnvcnacyclpafcgytvfvwfvwgqyppqqpqcsywsqrxqmnjvafycgvtlvhfcwtylaeuqfvxjatkbvcqnsqslhfavawnccveasfuqbqvqtcyllrqrxxwacfypsdcuqfavrqcgefqpyattracxwvtaawwddveasflcbqvdtrawmvupqquwxdecgqcwtyqyaflvlqsyqklhqsnafqvmllhvqpawrnqgvfusrecwawyqpfnwgawdgf";
    cout<<cs.length()<<endl;
    //nqgvfusrecwawy
    char ps[cs.length()];
    for (int i=0;i<cs.length();i++) {
        ps[i] = cs[i];
    }
    int keylength = 5;
    int alphabet[26];
    for (int i=0;i<26;i++) {
        alphabet[i]=0;
    }
    for (int i=0;i<26;i++) {
        for (int j=0;j<cs.length();j++) {
            if (cs[j]=='a' + i) alphabet[i]++;
        }
    }
    for (int i=0;i<26;i++) {
        cout<<alphabet[i]<<" ";
    }
    cout<<endl;


    vector<string> parts;

    for (int i = 0; i < cs.length(); i = i + keylength)

    {

        string part;

        for (int j = i; j < i + keylength; j++)

        {

            part.push_back(cs[j]);

        }

        parts.push_back(part);

    }

    for (auto part : parts) {

        cout<<part<<" ";

    }

    for (int i=0;i<cs.length();i++) {
        if (cs[i] == 'm') ps[i] = 'k';
        else if (cs[i]=='l') ps[i] = 's';
        else if (cs[i]=='h') ps[i] = 'p';
        else if (cs[i]=='f') ps[i] = 'h';
        else if (cs[i]=='a') ps[i] = 't';
        else if (cs[i]=='b') ps[i] = 'v';
        else if (cs[i]=='v') ps[i] = 'e';
        else if (cs[i]=='q') ps[i] = 'a';
        else if (cs[i]=='w') ps[i] = 'o';
        else if (cs[i]=='n') ps[i] = 'r';
        else if (cs[i]=='r') ps[i] = 'w';
        else if (cs[i]=='p') ps[i] = 'd';
        else if (cs[i]=='s') ps[i] = 'f';
        else if (cs[i]=='c') ps[i] = 'i';
        else if (cs[i]=='j') ps[i] = 'b';
        else if (cs[i]=='e') ps[i] = 'c';
        else if (cs[i]=='y') ps[i] = 'n';
        else if (cs[i]=='t') ps[i] = 'l';
        else if (cs[i]=='x') ps[i] = 'y';
        else if (cs[i]=='u') ps[i] = 'm';
        else if (cs[i]=='d') ps[i] = 'u';
        else if (cs[i]=='i') ps[i] = 'q';
    }
    cout<<endl<<endl;
    vector<string> parts1;

    for (int i = 0; i < cs.length(); i = i + keylength)

    {

        string part;

        for (int j = i; j < i + keylength; j++)

        {

            part.push_back(ps[j]);

        }

        parts1.push_back(part);

    }

    for (auto part : parts1) {

        cout<<part<<" ";

    }
    vector<string> parts2;
    cout<<endl<<endl;
    for (auto part : parts1) {
        char partcopy[keylength];
        for (int i=0;i<keylength;i++) {
            partcopy[i]=part[i];
        }
        part[0]=partcopy[3];
        part[1]=partcopy[2];
        part[2]=partcopy[4];
        part[3]=partcopy[0];
        part[4]=partcopy[1];
        parts2.push_back(part);
        cout<<part<<" ";
    }
    

}
