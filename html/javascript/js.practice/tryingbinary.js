function trybinary(arr,k){
    let left=0;
    let right=arr.length()-1;
    for(let i=0;i<arr.length();i++){
        mid =Math.floor((lower+upper)/2);
        if (arr[mid]==target){
            return mid;
        }
        else if (arr[mid]<target){
            left=mid+1;
        }
        else if (arr[mid]>target){
            right=mid-1
        }
    }
}
let arr=[1,2,3,4,5,6,8,55];
console.log(trybinary(arr,55));