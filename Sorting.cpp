// BUBBLE SORT

// class Solution {
//   public:
//     void bubbleSort(vector<int> &arr) {
//         int n = arr.size();

//         for(int i = 0; i < n - 1; i++) {
//             for(int j = 0; j < n - i - 1; j++) {
//                 if(arr[j] > arr[j + 1]) {
//                     swap(arr[j], arr[j + 1]);
//                 }
//             }
//         }
//     }
// };


// INSERTION SORT
// class Solution {
//   public:
//     void insertionSort(vector<int>& arr) {
//         int n = arr.size();
//         for(int i = 1; i < n; i++){
//         int key = arr[i];
//         int j=i-1;
    
//         while((j>=0) && arr[j]>key){
//             arr[j+1] = arr[j];
//             --j;
//         }
//         arr[j+1] = key;
// }
//     }
// };

// SELECTION SORT
class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        int min_index;
        int n = arr.size();
        for(int i=0; i<n-1; i++){
            min_index = i;
            for(int j = i+1; j<n; j++){
                if(arr[j]<arr[min_index]){
                    min_index = j;
                }
            }
            swap(arr[min_index], arr[i]);
        }
    }
};