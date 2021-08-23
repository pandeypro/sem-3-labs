#include <iostream>
using namespace std;
int search(int *array, int size, int n)
{
 if (size == 0)
 return -1;
 if (array[0] == n)
 return 0;
 int index = search(array + 1, size - 1, n);
 if (index != -1)
 index++;
 return index;
}
int main()
{
 int size, n;
 cout << "enter the size of the array : ";
 cin >> size;
 int *array = new int[size];
 cout << "enter the elements int the array : \n";
 for (int i = 0; i < size; i++)
 {
 cin >> array[i];
 }
 cout << "enter the elements to search in the array : ";
 cin >> n;
 search(array, size, n);
 cout << "element " << n << " is present at index : " << search(array, size, n);
 return 0;
}
