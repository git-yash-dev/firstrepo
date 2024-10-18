function peak(arr){
    let left =0;
    let right =arr.length;
    while (lft <=right){
        let mid =Math.floor((left +right )/2);
        if (mid==arr[mid]){
            left =mid +1;
        }
        else {right =mid -1;
            return mid;
        }
    }
}