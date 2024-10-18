function findtarget(arr,target){
    let left =0;
    let right = arr.length-1;
    let fapp=-1;//first appearence
    while(left<=right){
        let mid =Math.floor((left+right)/2);
        if (arr[mid]<target){
            left =mid +1;
        }
        else if (arr[mid]==target){
            fapp=mid;
            right=mid-1;
        }
        else{
            right=mid-1;
        }
    }
    return fapp;
}
let arr=[1,1,1,2,2,2,3,3,5,5,6,7,8,9];
console.log(findtarget(arr,5));