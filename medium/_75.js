function sortColors(nums) {
  // build heap
  for (let i = Math.floor(nums.length / 2) - 1; i >= 0; i--) {
    heapify(nums, nums.length - 1, i);
  }
  let size = nums.length - 1;
  // swap head of heap with last node until size = 0
  while (size >= 0) {
    // replace head with tail of heap
    const temp = nums[0];
    nums[0] = nums[size];
    nums[size] = temp;
    size--;
    heapify(nums, size, 0); // keeps heap property
  }
}

function heapify(arr, size, index) {
  let max = index;

  const left = 2 * index + 1; // left child of index node
  const right = 2 * index + 2; // right child of index node

  // when left child is greater than parent node
  if (left <= size && arr[left] > arr[max]) {
    max = left;
  }
  // when right child is greater than both parent and left child nodes
  if (right <= size && arr[right] > arr[max]) {
    max = right;
  }
  // if any of the childrens are greater than parent node
  if (max != index) {
    // swap the max of left and right with parent node
    const temp = arr[index];

    arr[index] = arr[max];
    arr[max] = temp;
    // recurse until index out of bound or parent is max
    heapify(arr, size, max);
  }
}

const nums = [2, 0, 2, 1, 1, 0];
sortColors(nums);
console.log(nums);

/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.
*/
