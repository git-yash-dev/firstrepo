function oncewtwice(arr){
    let left=0;
    let right = arr.length-1;
    let onceapp=-1;
    while (left<=right){
        let mid =Math.floor((left+right)/2);
        if (arr[mid+1]==Math.ceil(mid/2)){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    if (left==0){
        return -1;
    }
    return arr[left];
}
let arr=[1,1,2,2,3,4,4,5,5,6,6];
console.log(oncewtwice(arr));