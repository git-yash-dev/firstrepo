function findsmall(arr){
    let left =0;
    let right = arr.length-1;
    while(left<= right){
        let mid = Math.floor((left+right)/2);
        if (arr[mid]>arr[mid+1]){
            return arr[mid+1];
        }
        else if (arr[mid]<arr[mid+1]){
            left=mid +1;
        }
    }
} 
let arr=[4,5,1,2,3];
console.log(findsmall(arr));