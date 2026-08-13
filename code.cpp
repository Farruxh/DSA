#include <iostream>
#include <vector> // implementation of vector is written in STL file, this header must be included to use vectors
using namespace std;

int sum(int a, int b) {
    return a+b;
}

int changeArray(int arr[]){
    for(int i=0; i<3; i++){
        arr[i] = 2 * arr[i];
    }
}

int linearSearch(int arr[], int num){
    for(int i=0; i<7; i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}
vector<int> pairSum(vector<int> num, int target){
    vector<int> ans;
    for(int i=0;i<4;i++){
        for(int j=i+1; j<4; j++){
            if(num[i] + num[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}

int main() {
    //      Pattern 1
    // int n = 6;
    // for(int i = 0; i <= n-1; i++){
    //     for(int j = 0; j < i+1; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    //      Pattern 2
    // int n = 4;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i+1; j++){
    //         cout << (i+1);
    //     }
    //     cout << endl;
    // }


    //      Pattern 3 with characters
    // char ch = 'A';
    // for(int i=0; i<5; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout << ch;
    //     }
    //     ch++;
    //     cout << endl;
    // }


    //      Pattern 4
    // int n = 4;
    // for(int i=1;i<=n;i++){
    //     for(int j=1; j<i+1; j++){
    //         cout << j;
    //     }
    //     cout << endl;
    // }


    //     Pattern 5
    // for(int i=0; i<4; i++){
    //     for(int j=i+1;j>0;j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }


    //     Pattern 6 Floyd's triangle numbers
    // int num=1;
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout << num <<" ";
    //         num++;
    //     } 
    //     cout << endl;
    // }


    //     Pattern 7 Floyed's triangle characters
    // char ch = 'A';
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<< ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }


    //     Pattern 7 Inverted Triangle for numbers 
    // int num = 4;
    // for(int i=0; i<num; i++){
    //     //for spaces
    //     for(int j=0; j<i; j++){
    //         cout<< " ";
    //     }
    //     //for numbers
    //     for(int j=0; j<num-i; j++){
    //         cout<< i+1;
    //     }
    //     cout<< endl;
    // }


    //     Pattern 7 Inverted Triangle for characters
    // char ch = 'A';
    // for(int i=0; i<num; i++){
    //     //for spaces
    //     for(int j=0; j<i; j++){
    //         cout<< " ";
    //     }
    //     //for characters
    //     for(int j=0; j<num-i; j++){
    //         cout<< ch;
    //     }
    //     ch++;
    //     cout << endl;
    // }


    //      Pattern 8 Pyramid numbers
    // int n=4;
    // for(int i=0; i<n; i++){
    //     // for spaces
    //     for(int j=0; j<n-i-1; j++){
    //         cout << " ";
    //     }
    //     // for numbers
    //     for(int j=0; j<i+1; j++){
    //         cout << j+1 ;
    //     }
    //     // for backward numbers
    //     for(int j=i; j>=1; j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }


    //      Pattern 9 Hollow Diamond
    // int n=4;
    // // top part of diamond
    // for(int i=0; i<n; i++){
    //     // spaces
    //     for(int j=0; j<=n-i-1; j++){
    //         cout << " ";
    //     }
    //     cout << "*";
    //     if(i!=0){
    //         // spaces
    //         for(int j=0; j<2*i-1; j++){
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // bottom part of diamond
    // for(int i=0; i<n-1; i++){
    //     // spaces
    //     for(int j=0; j<i+2; j++){
    //         cout<< " ";
    //     }
    //     cout<< "*";
    //     if(i != n-2){
    //         // spaces
    //         for(int j=0; j<2*(n-i)-5; j++){
    //             cout<< " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    //int a=4, b=8;
    // cout << (a & b) << endl;  // bitwise AND
    // cout << (a | b) << endl;  // bitwise OR
    // cout << (a ^ b) << endl;  // bitwise XOR
    // cout << (4 << 1) << endl; // bitwise left shift
    // cout << (4 >> 1) << endl; // bitwise right shift 


    // Array basics
    // int num[] = {5,15,22,1,-15,24};
    // int smallest = INT32_MAX;
    // int largest = INT32_MIN;
    // for(int i=0; i<6;i++){
    //     if(num[i] < smallest){
    //         smallest = num[i];
    //     }
    //     // OR
    //     smallest = min(num[i], smallest);
    //     largest = max(num[i], largest);
    // }
    // cout<< "The smallest number is: " << smallest << endl;
    // cout<< "The largest number is: " << largest;


    // PASS BY REFERENCE
    // int arr[] = {1,2,3};
    // changeArray(arr);
    // for(int i=0;i<3;i++){
    //     cout<< arr[i] << " ";
    // }

 
    // LINEAR SEARCH  time complexity: O(n)
    // int arr[] = {4,2,7,8,1,2,5};
    // cout << "Number 7 index: " << linearSearch(arr, 7);


    // REVERSING AN ARRAY USING 2 POINTERS APPROCH time complexity: O(n)
    // int arr[] = {4,2,7,8,1,2,5};
    // int start = 0;
    // int end = 6;
    // while(start < end){
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }
    // for(int i=0;i<7;i++){
    //     cout << arr[i] << " ";
    // }


    // VECTORS (Dynamic Array, can be change dynamically, can resize itself, allot dynamic memory)

    // vector<int> vec; //size of this vector is zero
    // vector<int> vec1 = {1,2,3};
    // vector<int> vec2(3,0); // 3 = size of vector, 0 = value on each index
    // // cout << vec2[0];
    // vector<char> vec3 = {'a', 'b', 'c', 'd'};
    // for(char ch: vec3){     // for each loop
    //     cout<< ch << endl;;
    // }



    // leetcode problem (find isolate number in an array)
    // vector<int> vec = {4,1,2,1,2};
    // int ans;
    // for(int val: vec){
    //     ans = ans ^ val;
    // }
    // cout << "The isolated value in the given array is: "<< ans;



    //Subarray
    // int n = 5;
    // int arr[] = {1,2,3,4,5};
    // for(int strt = 0; strt<n; strt ++){
    //     for(int end=strt; end< n; end++){
    //         for(int i=strt; i<=end; i++){
    //             cout<< arr[i];
    //         }
    //         cout<< " ";
    //     }
    //     cout<< endl;
    // }

    // Maximum subarray sum, time complexity: O(n^2)
    // int arr[] = {1,2,3,4,5};
    // int maxSum = INT8_MIN;
    // for(int st=0; st<5;st++){
    //     int currSum = 0;
    //     for(int end=st; end<5; end++){
    //         currSum += arr[end];
    //         maxSum = max(currSum, maxSum);
    //     }
    // }
    // cout << maxSum << " ";

    // Pair Sum, target sum: 9 (Brute Force Apporch) time complexity: O(n^2)
    vector<int> arr = {2,7,11,15};
    vector<int> ans = pairSum(arr, 18);

    cout << ans[0] << " " << ans[1];

    return 0;
}