function searchcheck(arr,target){
    let left=0;
    let right=arr.length-1;
    let ind=-1;
    while(left <=right){
        let mid=Math.floor((left+right)/2);
        if (arr[mid]==target){
            ind=mid;
            right=mid-1;
        }
        else if (arr[mid]<target){
            left=mid+1
        }
        else{right=mid-1;}
    }
    return ind;
}
let arr=[1,5,8,9,9,9,9,9,11,15];
console.log(searchcheck(arr,9));