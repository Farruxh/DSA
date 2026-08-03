#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a+b;
}

int changeArray(int arr[]){
    for(int i=0; i<3; i++){
        arr[i] = 2 * arr[i];
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
    int arr[] = {1,2,3};
    changeArray(arr);
    for(int i=0;i<3;i++){
        cout<< arr[i] << " ";
    }

    return 0;
}