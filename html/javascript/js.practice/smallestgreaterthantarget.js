function smalltarget(arr,target){
    let left=0;
    let right=arr.length-1;
    let smalar=-1;
    while (left<=right){
        let mid = Math.floor((left+right)/2);
        if (arr[mid]==target){
            return arr[mid];
        }
        else if (arr[mid]<target){
            left=mid +1;
        }
        else{
            smalar=arr[mid];
            arr[mid] >target;}
    }
}
let arr=[2,5,8,12,15];
console.log(smalltarget(arr,9));