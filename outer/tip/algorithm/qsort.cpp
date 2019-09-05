#include <iostream>
#include <vector>

using namespace std;


// template<typename T>
// void quick_sort_recursive(vector<T> arr, int start, int end) {
// 	if (start >= end) return;
// 	T mid = arr[end];
// 	int left = start, right = end - 1;
// 	while (left < right) {
// 		while (arr[left] < mid && left < right) left++;
// 		while (arr[right] >= mid && left < right) right--;
// 		std::swap(arr[left], arr[right]);
// 	}
// 	if (arr[left] >= arr[end])
// 		std::swap(arr[left], arr[end]);
// 	else
// 		left++;
// 	quick_sort_recursive(arr, start, left - 1);
// 	quick_sort_recursive(arr, left + 1, end);
// }
// template<typename T> //整數或浮點數皆可使用,若要使用物件(class)時必須設定"小於"(<)、"大於"(>)、"不小於"(>=)的運算子功能
// void quick_sort(vector<T> arr, int len) {
// 	quick_sort_recursive(arr, 0, len - 1);
// }

struct Range {
	int start, end;
	Range(int s = 0, int e = 0) {start = s, end = e;}
};
template<typename T> //整數或浮點數皆可使用,若要使用物件(class)時必須設定"小於"(<)、"大於"(>)、"不小於"(>=)的運算子功能
void quick_sort(vector<T> &arr, const int len) {
	if (len <= 0) return; //避免len等於負值時宣告堆疊陣列當機
	//r[]模擬堆疊,p為數量,r[p++]為push,r[--p]為pop且取得元素
	Range r[len]; int p = 0;
	r[p++] = Range(0, len - 1);
	while (p) {
		Range range = r[--p];
		if(range.start >= range.end) continue;
		T mid = arr[range.end];
		int left = range.start, right = range.end - 1;
		while (left < right) {
			while (arr[left] < mid && left < right) left++;
			while (arr[right] >= mid && left < right) right--;
			swap(arr[left], arr[right]);
		}
		if (arr[left] >= arr[range.end])
			swap(arr[left], arr[range.end]);
		else
			left++;
		r[p++] = Range(range.start, left - 1);
		r[p++] = Range(left + 1, range.end);
	}
}

int main()
{
  vector<int> vec;
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(1);

  quick_sort(vec, vec.size());

  for(const auto & single : vec)
    cout << single << endl;
}
