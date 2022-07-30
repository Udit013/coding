/*Write a program with recursive functions that perform the following:-
a. Reverse an input string
b. Check if an input string is palindrome or not
c. Binary search
d. Sorting by putting least number at the beginning in each successive calls */

#include <iostream>
using namespace std;

class Recursion{
    public:
    void enterArray(int arr[], int len){
        cout << "Enter the elements of array: " << endl;
        for(int i = 0; i < len; i++){
            cin >> arr[i];
        }
    }
    string reverseString(string str){
        if(str.size() == 0){
            return "";
        }
        return reverseString(str.substr(1)) + str[0];
    }
    bool isPalindrome(string input){
        string rev = reverseString(input);
        return (input == rev);
    }
    void swap(int arr[], int i, int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    void selectionSort(int arr[], int index, int len){
        int minIndex = index;
        for(int j = index+1; j < len; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr, minIndex, index);
        if(index+1 < len)
            selectionSort(arr, index+1, len);   
    }
    int binarySearch(int arr[], int num, int lowerBound, int upperBound){
        if(upperBound >= lowerBound){
            int mid = (upperBound+lowerBound)/2;

            if(arr[mid] == num)
                return mid;

            if(arr[mid] > num)
                return binarySearch(arr, num, lowerBound, mid-1);
            
            if(arr[mid] < num)
                return binarySearch(arr, num, mid+1, upperBound);
        }

        return -1;
    }
};

int main(){
    int choice;
    Recursion obj;
    do{
        cout << "\n1.Reverse an input string.";
        cout << "\n2.Check if string is palindrome.";
        cout << "\n3.Binary Search.";
        cout << "\n4.Selection Sort.";
        cout << "\n5.Exit.";
        cout << "\nEnter choice: ";
        cin >> choice;
        switch(choice){
            case 1 :{
                        string s, reverse;
                        cout << "\nEnter the string: ";
                        cin.ignore();
                        getline(cin, s);
                        reverse = obj.reverseString(s);
                        cout << "\nReverse of " << s << " is " << reverse << endl;
                        break;
                    }
            case 2 :{
                        string s;
                        cout << "\nEnter the string: ";
                        cin.ignore();
                        getline(cin, s);
                        if(obj.isPalindrome(s))
                            cout << s << " is palindrome." << endl;
                        else
                            cout << s << " is not palindrome." << endl;
                        break;
                    }
            case 3 :{
                        int len;
                        cout << "\nEnter number of elements: ";
                        cin >> len;
                        int arr[len];
                        obj.enterArray(arr, len);
                        obj.selectionSort(arr,0,len);
                        int x;
                        cout << "\nEnter the number you want to find: ";
                        cin >> x;
                        int index = obj.binarySearch(arr, x, 0, len-1);
                        if(index < 0)
                            cout << "Element not found." << endl;
                        else
                            cout << "Element found at index: " << index;
                        break;
                    }
            case 4: {
                        int len;
                        cout << "\nEnter number of elements: ";
                        cin >> len;
                        int arr[len];
                        obj.enterArray(arr, len);
                        obj.selectionSort(arr,0, len);
                        cout << "Array after sorting: " << endl;
                        for(int i = 0; i < len; i++)
                            cout << arr[i] << ", ";
                        break;
                    }       
            default: cout << "Exiting." << endl;;
        }
        cout << endl;
    }while(choice>=1&&choice<=4);
    return 0;
}

