#include <iostream>
using namespace std;

//TASK 1
int get_digit_sum(int num, int sum) {
    if (num / 10 == 0) {
        sum += num % 10;
        return sum;
    }
    sum += num % 10;
    return get_digit_sum(num / 10, sum);
}   

int get_digit_sum(int num) {
    return get_digit_sum(num, 0);
}

//TASK 2
int get_digit_frequency(int num, int digit, int digit_frequency) {
    if (num / 10 == 0) {
        if (num % 10 == digit) {
            digit_frequency++;
        }
        return digit_frequency;
    }
    if (num % 10 == digit) {
        digit_frequency++;
    }
    return get_digit_frequency(num / 10, digit, digit_frequency);
}

//this is called a fucntion overload 
int get_digit_frequency(int num, int digit) {
    return get_digit_frequency(num, digit, 0);
}

//TASK 3
void read(int * arr, int n, int i)
{
	if (i == n) return;
	cin >> *arr;
	read(arr + 1, n, i + 1);
}

//TASK 4
bool is_array_ascending(const int *const arr, int index, int length) {
    bool is_ascending = arr[index - 1] <= arr[index];
    if (index == length - 1) {
        return is_ascending;
    }
    return is_ascending && is_array_ascending(arr, index + 1, length);
}

bool is_array_ascending(const int *const arr, int length) {
    return is_array_ascending(arr, 1, length);
}

//MAIN
int main() {
    int num = 1234;
    cout << get_digit_sum(num) << endl;
	
	int n = 2020;
    int digit = 2;
    cout << get_digit_frequency(n, digit) << endl;
    
    int arr[] = {5,6,7,8,10};
    cout << boolalpha << is_array_ascending(arr, 5) << endl;
}
