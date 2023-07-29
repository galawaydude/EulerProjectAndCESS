// vector<int> product(vector<int> &ar, int n){
//     int carry = 0;
//     vector<int> temp;
//     for (int i = ar.size()-1; i>=0; i--){
//         int prod = n * ar[i] + carry;
//         if (prod/10 != 0 && i != 0){
//             carry = prod/10;
//             temp.push_back(prod%10);
//         }
//         if (prod/10 !=0 && i==0){
//             while (prod>0){
//                 temp.push_back(prod%10);
//                 prod = prod/10;
//             }
//         }
//         if (prod/10 == 0 ){
//             temp.push_back(prod);
//         }
//     }
//     if (temp[temp.size()-1]== 0){
//         temp.pop_back();
//     }
//     reverse(temp, 0, temp.size()-1);
//     return temp;
// }