function onlyonce(arr){
    let left=0;
    let right=arr.length-1;
    while (left<=right){
        let mid =Math.floor(( left+right)/2);
        if (arr[mid]==(mid+1)/2){
            left=mid+1;
        }
        else if (arr[mid]>((mid+1)/2)){
            right=mid -1;
        }
    }
    return arr[left];
}
let arr=[1, 1, 2, 3, 3, 4, 4, 5, 5];
console.log(onlyonce(arr));