#include<iostream>
using namespace std;

//#1
// int main() {
//     int n;
//     cout<<"Enter amount of integers : ";
//     cin>>n;
//     int a[n];
//         int res=0;
//     for(int i=0;i<n;i++) {
//         cout<<"Enter "<<n<<" integers : "<<endl;
//         cin>>a[i];
//         res+=a[i];
//     }
//     cout<<"The sum is: "<<res<<endl;
// }

//#2

// int main() {
//     int n;
//     cout<<"Enter amount of integers : ";
//     cin>>n;
//     int a[n];
//     int res=0;
//     cout<<"Enter "<<n<<" integers : "<<endl;
//     for(int i=0;i<n;i++) {
//         cin>>a[i];
//         res+=a[i];
//     }
//     cout<<"The average is: "<<res/n<<endl;
// }

//#3

// int main() {
//     int n;
//     cout<<"Enter amount of integers : ";
//     cin>>n;
//     int a[n];
//     int res=a[0];
//     cout<<"Enter "<<n<<" integers : "<<endl;
//     for(int i=0;i<n;i++) {
//         cin>>a[i];
//         if(a[i]<res) {
//             res=a[i];
//         }
//     }
//     cout<<"The minumum is: "<<res<<endl;
// }

//#4

int indexOfLargestElement(double arr[], int size) {
    if (size <=0) {
        return -1;
    }
    int max = arr[0];
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            maxIndex = i;
        }
    }
    return maxIndex;
}
int main() {

}