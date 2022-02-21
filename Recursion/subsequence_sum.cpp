
//Subsequences which give the required sum
#include<bits/stdc++.h>
using namespace std;
 // prints all the subsequences whose sum is k
void rsubsequence_sum(int i, vector<int> &ls, int arr[], int ans, int sum, int n) {
        if (i == n) {
            if (ans == sum) {
                for(auto it:ls)
                {
                    cout<<it<<" ";
                }
                cout<<endl;
            }
            return;
        }

        ls.push_back(arr[i]);
        ans += arr[i];
        rsubsequence_sum(i + 1, ls, arr, ans, sum, n); // take or pick function
        ls.pop_back();
        ans -= arr[i];
        rsubsequence_sum(i + 1, ls, arr, ans, sum, n); // not take value function

    }

    // function to print only one subsequence whose sum is k
bool orsubsequence_sum(int i, vector<int> &ls, int arr[], int ans, int sum, int n) {
        if (i == n) {
            if (ans == sum) {
                for(auto it:ls)
                {
                    cout<<it<<" ";
                }
                cout<<endl;
                return true;
            }
            // condition not satisfied
            else
                return false;
        }

        ls.push_back(arr[i]);
        ans += arr[i];
        if (orsubsequence_sum(i + 1, ls, arr, ans, sum, n) == true)
            return true; // take or pick function
        ls.pop_back();
        ans -= arr[i]; // take or pick function
        if (orsubsequence_sum(i + 1, ls, arr, ans, sum, n) == true)
            return true; // not take value function

        return false;
    }

    // function which gives the count of subsequences with sum=k
    // Here, the function only wants to return the count, we dont want to print the
    // pairs of sum so we dont need the list
int crsubsequence_sum(int i, int arr[], int ans, int sum, int n) {
        // below line is strictly done if array contains only positive
        // if (ans > sum) return 0;
        if (i == n) {
            if (ans == sum) {
                return 1;
            }
            // condition not satisfied
            else
                return 0;
        }

        ans += arr[i];
        int left = crsubsequence_sum(i + 1, arr, ans, sum, n); // take or pick function
        ans -= arr[i];
        int right = crsubsequence_sum(i + 1, arr, ans, sum, n); // not picking the subsequence
        return left + right;
    }

int main() 
{
        int n;
        int k;
        vector<int> l;
        cout<<"Enter the size of array\n";
        cin>>n;
        cout<<"Enter the target value\n";
        cin>>k;
        int arr[n];
        cout<<"Enter the elements in array\n";
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        int i = 0;
        int ans = 0;
        rsubsequence_sum(i, l, arr, ans, k, n); // prints all the subsequences whose sum is k
        orsubsequence_sum(i, l, arr, ans, k, n); // function to print only one subsequence whose sum is k
        int ans_f = crsubsequence_sum(i, arr, ans, k, n); // function to print the count of
        cout<<ans_f;      
}

// Print all subsequence with the given sum - parameter method

// Print only onesubsequence - return True/False & Avoid recursion calls if you
// get true.

// count - return 1 and return 0 add all the fun() recursion calls