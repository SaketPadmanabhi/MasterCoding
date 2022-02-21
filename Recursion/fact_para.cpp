/*package Recursion;

// Factorial in parameterized way.
import java.util.*;

public class fact_para {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int fact = 1;
        parafact(n, fact);
        scn.close();
    }

    public static void parafact(int num, int fact) {
        if (num == 0) {
            System.out.println(fact);
            return;
        }
        parafact(num - 1, fact * num);
    }
} */

#include<bits/stdc++.h>
using namespace std;
void parafact(int n, int fact)
{
    if(n==0)
    {
        cout<<fact;
        return;
    }
    parafact(n-1,fact*n);
}
int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    int fact = 1;
    parafact(n,fact);
}
