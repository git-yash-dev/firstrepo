function findceiling(arr,target){
    let left=0;
    let right=arr.length-1;
    let cel=undefined;
    while (left<=right){
        let mid =Math.floor((left+right)/2);
        if (arr[mid]==target){
            return arr[mid];
        }
        else if (arr[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
            cel=arr[mid];
        }
    }
    return cel;
}
let arr=[1,3,5,7,10,15,19];
console.log(findceiling(arr,6));