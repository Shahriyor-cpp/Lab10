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

// int indexOfLargestElement(double arr[], int size) {
//     if (size <=0) {
//         return -1;
//     }
//     int max = arr[0];
//     int maxIndex = 0;
//     for (int i = 1; i < size; i++) {
//         if (arr[i] > max) {
//             maxIndex = i;
//             max=arr[i];
//         }
//     }
//     return maxIndex;
// }
// int main() {
//     int size =15;
//     double arr[size];
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
//     int index = indexOfLargestElement(arr, size);
//     cout << index << endl;
//     return 0;
// }

//#5

// bool strictlyEqual(const int list1[], const int list2[], int size) {
//     for (int i = 0; i < size; i++) {
//         if (list1[i] != list2[i]) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;
//     int list1[size], list2[size];
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < size; i++) {
//         cin >> list1[i];
//     }
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < size; i++) {
//         cin >> list2[i];
//     }
//     if (strictlyEqual(list1, list2, size)) {
//         cout << "The two arrays are equal" << endl;
//     }else {
//         cout << "The two arrays are not equal" << endl;
//     }
//     return 0;
// }

//#6
// int main() {
//     const int size=26;
//     int frequency[size]={0};
//     cout<<"Enter character(0 will stop):";
//     char z;
//     while(true) {
//         cin>>z;
//         if(z=='0') {
//             break;
//         }
//         if (z>='a' && z<='z') {
//             frequency[z-'a']++;
//         }
//     }
//     cout<<"Frequency of letters: ";
//     for(int i=0;i<size;i++) {
//         if(frequency[i]>0) {
//             cout<<char(i+'a')<<" "<<frequency[i]<<" "<<endl;
//         }
//     }
//     return 0;
// }

//#7
int main() {
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements: ";
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    for(int i=0;i<size-1;i++) {
        for(int j=0;j<size-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


//#8

//I dont know about randomly generating numbers and didnt want to copy from chatgpt

//#9

void reverseArray(int arr[], int start, int end) {
    while (start<end) {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

int main() {
    int arr[]={7,0,8,5,3,89};
    int size= sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,0,size-1);
    for(int i=0,i<size;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }    
}

//#10

void sort(int arr[],int n) {
    bool s =true;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i+1]){
            s=false;
            break;
        }
    }
    if(sorted){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
int main(){
    int arr[]={1,2,4,6,7,8};
    int n = sizeof(arr)/sizeof(arr[n]);
    sort(arr,n);
}
