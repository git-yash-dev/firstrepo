function findpeak(arr){
    let left=0;
    let right= arr.length-1;
    while (left<right){
        let mid =Math.floor((left+right)/2);
        if (arr[mid]<arr[mid+1]){
            left = mid;
        }
        else if (arr[mid]>arr[mid-1])
    }
}