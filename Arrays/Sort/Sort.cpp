// The average and worst-case time complexity of bubble sort is O(n^2), rendering it inefficient for handling large datasets. 
// It is mainly used for educational purposes or for sorting small lists. Merge Sort The best part is that merge sort has a time complexity of O(n log n) in all situations, which means it works efficiently even for large lists. 
// This efficiency makes merge sort particularly well-suited for handling large datasets. Merge sort is stable and guarantees consistent performance, but it requires additional memory space for the merging process. 
// Quick Sort Quick sort is another divide-and-conquer algorithm that selects a pivot element and partitions the list around the pivot. 
// In Quick Sort, the algorithm partitions the list by placing elements smaller than the pivot before it and elements larger than the pivot after it. 
// The partitioning process is repeatedly applied to the resulting sublists until the entire list is sorted. 

//Quick sort exhibits an average time complexity of O(n log n) and a worst-case complexity of O(n^2).
// However, it is widely used due to its good average-case performance and in-place sorting capabilities. 
// Interested in E&ICT courses? Get a callback ! Name * First Name First Last Name Last Email * Email Phone * India +91 Phone Number Please select a course * Course Submit Other Algorithms Selection Sort Selection sort works by repeatedly finding the minimum element from the unsorted part of the list and swapping it with the first unsorted element.
// This process continues until the list is sorted. Selection sort has a time complexity of O(n^2) and, like bubble sort, is not efficient for large datasets.

// Insertion Sort Insertion sort iterates through the list, comparing each element with the preceding elements and inserting it into the correct position in the sorted part of the list. 
// Insertion sort has a time complexity of O(n^2) but performs well for small lists or partially sorted data. 

// Heap Sort Heap sort uses a binary heap data structure to sort elements. It builds a heap from the input list and repeatedly extracts the maximum element (in a max-heap) or minimum element (in a min-heap), swapping it with the last element, and then re-heapifying the reduced heap. 
// Heap sort has a time complexity of O(n log n) in all cases and is an efficient in-place sorting algorithm.

//Radix Sort Radix sort is a non-comparative sorting algorithm that sorts elements by their individual digits or bits. 
// It sorts the elements based on each significant digit or bit, starting from the least significant to the most significant. 
// Radix sort can be implemented using a stable sorting algorithm such as counting sort or bucket sort. It has a time complexity of O(d * (n + k)), where d is the number of digits or bits, n is the number of elements, and k is the range of values.
// Radix sort is efficient for large datasets with a fixed number of digits or bits. Shell Sort Shell sort is an optimization of the insertion sort algorithm. It works by sorting elements that are far apart and gradually reducing the gap between them until the entire list is sorted. 

// Shell sort has a time complexity that depends on the gap sequence used, with the best-known sequence achieving a complexity of O(n log^2 n). 
// Shell sort performs better than insertion sort for larger lists but is not as efficient as some other sorting algorithms.
// Counting Sort Counting sort is an efficient sorting algorithm with a linear time complexity. It is particularly suitable for datasets that have a limited range of values.
// This algorithm counts the occurrences of each unique element and utilizes this information to determine their positions in the sorted output. 

// Counting sort has a time complexity of O(n + k), where n represents the number of elements and k denotes the range of values. It is commonly employed as a subroutine in other sorting algorithms or when the range of values is predetermined. 
// Bucket Sort Bucket sort is a distribution-based sorting algorithm that divides the input into a set of buckets and then sorts each bucket individually. It requires prior knowledge of the data distribution to determine the number and size of the buckets. 

//Timsort Timsort is a hybrid sorting algorithm derived from merge sort and insertion sort. It aims to combine the stability of merge sort with the efficiency of insertion sort for small sublists. 
// Timsort divides the input into small chunks, sorts them using insertion sort, and then merges them using merge sort. It has a time complexity of O(n log n) in the worst case and performs well for both small and large datasets. 
//Timsort is the default sorting algorithm in Python’s built-in sorting functions. In conclusion, searching and sorting algorithms play a vital role in data processing and manipulation.
//  Various algorithms exhibit distinct levels of efficiency and suitability for different situations. Gaining an understanding of their characteristics and performance aids in selecting the most appropriate algorithm for a specific task.
//  Whether the goal is to search for a particular value or organize a sizable dataset, choosing the correct algorithm can greatly influence the efficiency and speed of data operations.


// https://iq.opengenus.org/cheatsheet-for-search-algorithms/








































