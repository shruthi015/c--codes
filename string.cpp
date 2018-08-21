#include <iostream>

using namespace std;

// Complete the super_reduced_string function below.
string super_reduced_string(string s) {
    string t;
    int i,n=s.length();
    int k=n;
    
    while(s!=t)
    {
    for(i=0;i<n;i++)
    {
        if(s[i]!=s[i+1])
            t=t+s[i];
        else
            i=i+1;
    }
    if(s==t)
    
    	break;
    else
    {
    	s=t;
    	t="\0";
	}
}
    if(t=="\0")
    	t="Empty String";
    return t;
}

int main()
{
    string s;
    getline(cin, s);

    string result = super_reduced_string(s);

    cout << result << "\n";

    //fout.close();

    return 0;
}

