#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "kgfcwdqhvinpnzyhjcocntcjjwgkuwnthnnyvngkxacjjwgurfjmxwyyjgrbbufqwivjgdjxnofsdgrmncbgiyqiquqtxwlmocazxwqcajvjgtctnplyjhqscjnpjcvejbvdntythkpecjngcnvaqvokauybknnongmvtzvvgsvcpkhbqtftcjntj";
    set<string> s2;
    vector<string> trig;
    for (int i = 0; i < s.length(); i++)
    {
        s2.insert(s.substr(i, 3));
    }
    for (auto substr : s2)
    {
        int count = 0;
        for (int i = 0; i < s.length() - 2; i++)
        {
            string s3;
            s3.push_back(s[i]);
            s3.push_back(s[i + 1]);
            s3.push_back(s[i + 2]);
            if (s3 == substr)
                count++;
        }
        if (count > 1)
        {
            // cout<<substr<<"-"<<count<<endl;
            trig.push_back(substr);
        }
    }
    // for (auto substr : trig) {
    //     cout<<substr<<endl;
    // }

    int keylength = 10;

    vector<string> parts;
    for (int i = 0; i < s.length(); i = i + keylength)
    {
        string part;
        for (int j = i; j < i + keylength; j++)
        {
            part.push_back(s[j]);
        }
        parts.push_back(part);
    }
    // for (auto part : parts) {
    //     cout<<part<<endl;
    // }

    //////// frequency analysis
    int alphabet[26][10];
    for (int k = 0; k < 10; k++)
    {
        string fq;

        for (auto part : parts)
        {
            fq.push_back(part[k]);
        }
        for (int i = 0; i < 26; i++)
        {
            int count = 0;
            for (int j = 0; j < fq.size(); j++)
            {
                if (fq[j] == 'a' + i)
                {
                    count++;
                }
            }
            alphabet[i][k] = count;
            cout<<alphabet[i][k]<< " ";
            if (i==25) cout<<endl;
        }   
    }



    int max[10];
    int index[10];
    for (int k=0;k<10;k++) {
        max[k] = alphabet[0][k];
        for (int i=0;i<26;i++) {
            if (max[k] < alphabet[i][k]) {
                max[k] = alphabet[i][k];
                index[k] = i;
            }
        }
    }

    for (int k=0;k<10;k++) {
        cout<<index[k]<<endl;
    }

    ////// substitutiom

    string key;
    for (int i=0;i<keylength;i++) {
        if (index[i]> 4) {
            key.push_back(index[i]-4+97);
        }
        else if (index[i]-4+97 > 122) {
            key.push_back((index[i] - 4 + 97)%123 + 97);
        }
        else {
            key.push_back(index[i]-4 +26 +97);
        }
    }
    cout<<key<<endl;
    
    //jcjcffcccb

    string try0;
    for (int i=0;i<s.length();i++) {
        if ((s[i]-key[i%keylength] )<0) {
            try0.push_back('z'+(s[i]-key[i%keylength]) + 1);
        }
        else {
            try0.push_back(s[i]-key[i%keylength] + 'a');
        }
    }
    cout<<try0<<endl<<endl;

    


    // cout<<fq;

    // for (int i=0;i<s.length();i=i+10) {
    //     for(int j=i;j<i+10;j++){
    //         if(j!=i+9) cout<<s[j];
    //         else cout<<s[j]<<endl;
    //     }
    // }

    // by observation 
    //since "br" should be "be". therefore 2nd letter of key should be "c".
    key[1] = 'c';
    string try1;
    for (int i=0;i<s.length();i++) {
        if ((s[i]-key[i%keylength] )<0) {
            try1.push_back('z'+(s[i]-key[i%keylength]) + 1);
        }
        else {
            try1.push_back(s[i]-key[i%keylength] + 'a');
        }
    }
    cout<<try1<<endl<<endl;
    // since "tle" should be "the" therefore 10th letter of key should be "b".
    key[9] = 'b';
    string try2;
    for (int i=0;i<s.length();i++) {
        if ((s[i]-key[i%keylength] )<0) {
            try2.push_back('z'+(s[i]-key[i%keylength]) + 1);
        }
        else {
            try2.push_back(s[i]-key[i%keylength] + 'a');
        }
    }
    cout<<try2<<endl<<endl;
    // since "nebt" should be "next" therefore 4th letter of key should be "c".
    key[3] = 'c';
    string try3;
    for (int i=0;i<s.length();i++) {
        if ((s[i]-key[i%keylength] )<0) {
            try3.push_back('z'+(s[i]-key[i%keylength]) + 1);
        }
        else {
            try3.push_back(s[i]-key[i%keylength] + 'a');
        }
    }
    cout<<try3<<endl<<endl;
    // since "wpeak" should be "speak" therefore 7th letter of key should be "c".
    key[6] = 'c';
    string try4;
    for (int i=0;i<s.length();i++) {
        if ((s[i]-key[i%keylength] )<0) {
            try4.push_back('z'+(s[i]-key[i%keylength]) + 1);
        }
        else {
            try4.push_back(s[i]-key[i%keylength] + 'a');
        }
    }
    cout<<try4<<endl<<endl;
    // since "oj" should be "of" therefore 8th letter of key should be "c".
    key[7] = 'c';
    string try5;
    for (int i=0;i<s.length();i++) {
        if ((s[i]-key[i%keylength] )<0) {
            try5.push_back('z'+(s[i]-key[i%keylength]) + 1);
        }
        else {
            try5.push_back(s[i]-key[i%keylength] + 'a');
        }
    }
    cout<<try5<<endl<<endl;
    // since "nhamber" should be "chamber" therefore 4th letter of key should be "c".
    key[5] = 'f';
    string try6;
    for (int i=0;i<s.length();i++) {
        if ((s[i]-key[i%keylength] )<0) {
            try6.push_back('z'+(s[i]-key[i%keylength]) + 1);
        }
        else {
            try6.push_back(s[i]-key[i%keylength] + 'a');
        }
    }
    cout<<try6<<endl<<endl;

    // the plaintext makes perfect sence. therefore the key should be jcjcffcccb 

}
