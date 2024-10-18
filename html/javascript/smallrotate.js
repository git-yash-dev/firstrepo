function findsmallrotate(arr) {
    let left = 0;
    let right = arr.length - 1;
    
    // If the array is not rotated
    if (arr[left] < arr[right]) {
        return arr[left];
    }

    while (left <= right) {
        let mid = Math.floor((left + right) / 2);

        // Check if the mid element is the smallest
        if (arr[mid] < arr[mid - 1]) {
            return arr[mid];
        }

        // Check if the smallest is in the right half
        if (arr[mid] > arr[right]) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return arr[left]; // Fallback in case the smallest is at the `left` pointer
}

let arr = [4, 6, 8, 9, 11, 1, 2, 3];
console.log(findsmallrotate(arr));  // Output: 1
