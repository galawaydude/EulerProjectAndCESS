#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> &ar, int s, int e){
    if (s>=e){
        return;
    }
    swap(ar[s], ar[e]);
    return reverse(ar, s+1, e-1);
}
vector<int> product(vector<int> &ar, int n) {
    int carry = 0;
    vector<int> temp;
    for (int i = ar.size() - 1; i >= 0; i--) {
        int prod = n * ar[i] + carry;
        if (prod / 10 != 0 && i != 0) {
            carry = prod / 10;
            temp.push_back(prod % 10);
        } 
        else{
            temp.push_back(prod%10);
            carry = prod/10;
        }
    }
    while (carry > 0) {
        temp.push_back(carry % 10);
        carry = carry/10;
    }
    reverse(temp, 0, temp.size() - 1);
    return temp;
}
int sum_of_digit_fact(vector<int> &ar){
    int sum = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        sum = sum+ar[i];
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<int> ar1;
    ar1.push_back(1);
    for (int i = 1; i <= n; i++){
        vector<int> temp = product(ar1, i);
        ar1 = temp;
    }
    cout<< sum_of_digit_fact(ar1);
    //cout<<ar1.size();
}